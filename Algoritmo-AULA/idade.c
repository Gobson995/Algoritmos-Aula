#include <stdio.h>

int main () {

  int idade;
  printf("Escreva sua idade\n");
  scanf("%i", &idade);
  switch (idade) {
    case 1 ... 4:
    printf("Sem Categoria\n");
    break;
    case 5 ... 7:
    printf("Infantil A\n");
    break;
    case 8 ... 10:
    printf("Infantil B\n");
    break;
    case 11 ... 13:
    printf("Juvenil A\n");
    break;
    case 14 ... 17:
    printf("Juvenil B\n");
    break;
    default:
    printf("Aduto\n");
    break;
  }
  return 0;
}