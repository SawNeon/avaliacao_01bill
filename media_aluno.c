#include <stdio.h>
#include <math.h>
int main (){

float port;
float math;
float soma;
float media;

printf("Digite sua nota de portugues: ");
scanf("%f", &port);
printf("Digite sua nota de matematica: ");
scanf("%f", &math);
soma = port + math;
media = soma / 2;
printf("Sua media e %.2f\n", media);

system("pause");

return 0;
}


