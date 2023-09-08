#include <stdio.h>
#include <math.h>

int main(){

char caracter;

printf("Digite o caracter: ");
scanf("%c", &caracter);

printf("Seu caracter em decimal: %d\n", caracter);
printf("Seu caracter em hexadecimal: 0x%x\n\n", caracter);
printf("==========================nao entendi direito de onde veio isso==========================\n");

system("pause");

return 0;
}