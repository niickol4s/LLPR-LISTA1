#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float third;
	float fourth;
	float total;
	
	printf("Calcule a Multiplicação: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	printf("Insira o terceiro valor: ");
	scanf("%f", &third);
	
	printf("Insira o quarto valor: ");
	scanf("%f", &fourth);
	
	total = first * second * third * fourth;
	
	printf("O valor calculado da multiplicação entre os números %f, %f, %f e %f foi: %f", first, second, third, fourth, total);
	
	return 0;
}
