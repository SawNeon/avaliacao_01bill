#include <stdio.h>
#include <math.h>
int main (){

float distancia;
float litros;
float media;

printf("Digite distancia percorida: ");
scanf("%f", &distancia);
printf("Digite quanto consumiu em litros: ");
scanf("%f", &litros);
media = distancia / litros;
printf("Sua media e %.2f\n", media);

system("pause");

return 0;
}