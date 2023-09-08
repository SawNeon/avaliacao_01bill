#include <stdio.h>
#include <math.h>

int main(){

float h;
float h2;
float c1;
float c11;
float c2;
float c22;

printf("Digite o valor do cateto adjacente: ");
scanf("%f", &c1);
printf("Digite o valor do cateto oposto: ");
scanf("%f", &c2);

c22 = c2 * c2;
c11 = c1 * c1;
h = c22 + c11;
h2 = sqrt(h);

printf("O valor da hipotenusa: %2.f", h2);

return 0;
}