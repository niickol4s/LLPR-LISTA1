#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float third;
	float soma;
	float subtracao;
	
	printf("Calcule a soma de dois valores e a subtra��o: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	soma = first + second;
	
	printf("O valor calculado da soma entre os n�meros %.2f e %.2f foi: %.2f \n", first, second, soma);
	
	printf("Insira o terceiro valor: ");
	scanf("%f", &third);
	
	subtracao = soma - third;
	
	printf("A subtra��o entre a soma %.2f e o terceiro valor %.2f: foi %.2f ", soma, third, subtracao);
	
	return 0;
}
