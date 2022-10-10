#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");

	float numero1, numero2 , media;
	
	
	printf("digite o primeiro numero\n");
	scanf("%f", &numero1);
	
	printf("digite o segundo numero\n");
	scanf("%f", &numero2);
	
	
	media = (numero1 + numero2) /2;
	
	printf( "a media  é %.2f " , media);
	
	system("pause");
	return 0;
}
