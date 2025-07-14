#include <stdio.h>

int main () {
 
float raio, volume;

scanf ("%f",&raio);

volume = (raio*raio*raio)*3.14*(4./3.);

printf ("seu volume é: %f\n", volume);

return 0;
}
