#include <stdio.h>

int main () {
  int menor;
  int v[10]={13,33,21,9,5,2,18,1,4,10};
  
  menor = v[0];
  for (int i = 0; i<10;i++){
    if(menor < v[i]){
      menor = menor;
    }
    else {
      menor = v[i];
    }
  }
  printf ("%i\n", menor);

  return;
}