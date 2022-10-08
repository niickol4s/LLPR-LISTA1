#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int first;
	int second;
	float quociente;
	int resto;
	
	printf("Calcule a Divisão: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &second);
	
	quociente = first / second;
	
	resto = first % second;
	 
	printf("O valor calculado da divisão entre os números %d e %d foi: \n Quociente: %f; \n Resto: %d", first, second, quociente, resto);
	
	return 0;
}
