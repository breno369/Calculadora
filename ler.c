#include "cabecalho.h"
#include <stdio.h>

double ler() {
  double a;
  scanf("%lf", &a);

  return a;
}

char ler_operacao() {
  char ler;
  scanf(" %c", &ler);

  return ler;
}
