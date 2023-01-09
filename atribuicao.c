#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero = 10;
	float media = 8.5;
	char simbolo = 'D';
	char palavra[20] = "joao";
	char endereco [60];
	
	
	printf("digite seu endereco: ");
	gets(endereco);
	printf("seu endereco eh: %s\n",endereco);
	
	printf("numero = %i\n",numero);
	printf("media = %.2f\n",media);
	printf("simbolo = %c\n",simbolo);
	printf("palavra = %s\n",palavra);
	
	
	system("pause");
	return 0;
	
	
	
}
