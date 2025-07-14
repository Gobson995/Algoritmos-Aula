#include <stdio.h>
#include "agt.h"


int main() {
  int f,valor,i;

  printf("\nDigite um valor: ");
  scanf("%i", &valor);

  f = fatorial(valor);
  printf("%i! = %i\n", valor, f);
  return 0;
}

