#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

	float n6, n7, n8;
	
	
	printf("digite o primeiro valor");
	scanf("%f" , & n6);


		
	printf("digite o segundo valor valor");
	scanf("%f" , &n7);

		
	printf("digite o terceiro valor");
	scanf("%f" , &n8);
	 

	printf("o valor calculado da média entre os numeros %.2f, %.2f e %.2f foi: %.2f \n", n6, n7, n8,  n6+n7+n8 /3);
	printf("porque com os parenteses ele vai primeiro somar os três valores e depois dividir por três,e sem os parenteses ele vai somar n6 e n7 e depois dividir n8/3");
	
	system("pause");
	return 0;
	
}
