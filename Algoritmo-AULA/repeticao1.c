#include <stdio.h>

int main() {
  int i,num,conta,contan,par,impar;
  i = 0;
  conta = 0;
  contan = 0;
  par = 0;
  impar = 0;

  while (i<10) {
    printf("\n escreva um numero: ");
    scanf("%i", &num);
    i++;
    if (num >= 0) {
      conta++;
    }
    else {
      contan++;
    } 
    if (num % 2 == 0) {
      par++;
    }
    else {
      impar++;
    }
  }
printf("\npositivos:%i ", conta);
printf("\nnegativos:%i ",contan);
printf("\npares:%i ",par);
printf("\nimpares:%i ",impar);
printf("\n");
}