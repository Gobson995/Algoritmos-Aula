#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
char letra;
char nome[100];

scanf ("%[^\n]s", nome);
printf("\nNome lido: %s", nome);
strcpy (nome, "AGT Algoritmos");
printf ("\nNome lido: %s", nome);
printf ("\nTamanho: %li", strlen(nome));



for (int i = 0; i < strlen(nome); i++) {
  printf ("Posição %i: %c\n", i, nome[i]);
}

return 0;





}