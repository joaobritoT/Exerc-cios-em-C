#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()

int main(){
	
	char palavra[15];
	int cont;
	
	printf("digite um nome: ");
	fflush(stdin);
	scanf("%s",&palavra);
	
	
	cont = strlen(palavra);
	printf("a palavra tem %i letras\n",cont);

	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
