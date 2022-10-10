#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

	float numero1, numero2, numero3, numero4, produto;
	
	printf("digite o numero1\n");
	scanf("%f" , &numero1);
	
	printf("digite o numero2\n");
	scanf("%f" , &numero2);

	printf("digite o numero3\n");
	scanf("%f" , &numero3);


	printf("digite o numero4\n");
	scanf("%f" , &numero4);

    produto = numero1 *  numero2 * numero3 * numero4;
    
    printf("o produto é %.2f\n" , produto);

	
	system("pause");
	return 0;
}
