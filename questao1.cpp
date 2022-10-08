#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float third;
	float media;
	
	printf("Calculadora de média: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	printf("Insira o terceiro valor: ");
	scanf("%f", &third);
	
	media = (first + second + third) /3;
	
	printf("O valor calculado da média entre os números %.2f, %.2f e %.2f foi: %.2f", first, second, third, media);
	
	return 0;
}
