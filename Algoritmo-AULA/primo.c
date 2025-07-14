#include <stdio.h>

int main() {
  int i;
  scanf("%i", &i);
  int resp = 0;
  int ii;
  ii = i;
  for (int j = 0; j<=i;j++) {
    if (i % ii != 0) {
      resp = resp + 1;
    }
  } 

  if (resp == 0) {
    printf ("Este número é primo");
  }
  else {
    printf ("Este número não é primo");
  }

  return 0;
}