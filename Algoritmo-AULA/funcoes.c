#include <stdio.h>

int conta_divisor( int entrada );
int main(){
    int entrada, numero;
    scanf("%i", &entrada);
    numero = conta_divisor(entrada);
    printf("\n%i tem %i de divisores\n", entrada, numero);
    return 0;
}

int conta_divisor( int entrada ){
    int i, conta_divisor;
    conta_divisor=0;
    for(i=1; i <=entrada; i=i+1){
        if( entrada % i ==0){
          conta_divisor= conta_divisor +1;
          printf("\n  %i é divisor ", i);
        }  
    }
    return conta_divisor;
}