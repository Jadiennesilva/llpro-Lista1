#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

    float valor1, valor2, valor3, soma;
    float subtracao;
    
    printf("digite o valor1\n");
    scanf("%f" , &valor1);
    
    printf("digite o valor2\n");
    scanf("%f" , &valor2);


    soma = valor1 + valor2;
    printf("o valor da soma é %.2f\n" , soma);
    
    printf("digite o valor3\n");
    scanf("%f" , &valor3);
    
    subtracao = soma - valor3;
    
    printf("o resultado da subtracao é %.2f", subtracao); 
	
	system("pause");
	return 0;
}
