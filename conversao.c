#include <stdio.h>
#include <math.h>
int main ()
{

float f;
float c;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &f);
c = (f - 32) * 5 / 9;
printf("A conversao para celsios eh: %f\n", c);
system("pause");
return 0;
}