#include "cabecalho.h"
#include <stdio.h>

int main() {
  double x, y, R;
  char caractere;
  char sair;
  do {
    printf("\n\nCALCULADORA\n\ntipos de operação:\n+ - soma\n- - subtração\nx - multiplicação\n/ "
           "- divisão\n%% - resto de divisõa inteira\n******o %% pode ser "
           "usado apenas para numeros inteiros******\n\n");

    printf("digite o primeiro numero: \n");
    x = ler();

    printf("digite o tipo da operação: \n");
    caractere = ler_operacao();

    printf("digite o segundo numero: \n");
    y = ler();

    switch (caractere) {
    case '+':
      R = soma(x, y);
      break;
    case '-':
      R = subtracao(x, y);
      break;
    case 'x':
      R = multiplicacao(x, y);
      break;
    case '/':
      R = divisao(x, y);
      if (R == 369) {
        printf("nao pode dividir algo por 0\n");
        return 1;
      }
      break;
    case '%':
      R = resto(x, y);
      break;
    }
    imprimir(R);

    printf("\n\nVocê deseja Sair? (s ou n)");
    scanf(" %c",&sair);
  } while (sair != 's');

  return 0;
}
