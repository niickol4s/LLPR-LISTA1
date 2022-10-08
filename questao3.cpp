#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float media;
	
	printf("Calculadora de Média:\n ");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	media = (first + second)/2;
	
	printf("O valor calculado da média entre os números %.2f e %.2f foi: %.2f", first, second, media);
	
	return 0; 
}
