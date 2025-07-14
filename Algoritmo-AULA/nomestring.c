#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100]="Gustavo";
  int indice, tamanho;
  tamanho = strlen(palavra);
  printf("\nTamanho: %i\n", tamanho);
  for (indice = 0; indice < tamanho;indice++) {
    printf("%c\n", palavra[indice]);
  }
}