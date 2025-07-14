#include <stdio.h>
#include "agt.h"

int fatorial (int valor) {
  int fat, i;
  fat = 1;
  for (i=1; i <= valor; i++){
  fat = fat * i;
}
  return fat;
}