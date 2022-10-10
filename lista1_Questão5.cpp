#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

    int valor1, valor2, resto;
	float divisao;
	
	printf("digite o valor1\n");
	scanf("%d" , &valor1 );	
	
	
	printf("digite o valor2\n");
	scanf("%d" , &valor2);	
	
	resto = valor1 % valor2;
	divisao = valor1 / valor2;
	
	printf("o resto da divisão é %d\n", resto);
	printf("calcular a divisão");
	
	
	
	printf ("a divisão é %.2f\n", divisao);
	
	
	system("pause");
	return 0;
}
