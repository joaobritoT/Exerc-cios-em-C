#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1;
	int resultado;
	int cont = 1;
	
	printf("digite um numero para ver a sua tabuada: ");
	scanf("%i",&n1);
	
	while(cont<=10){
		resultado = (n1 * cont);
		printf("%i x %i = %i\n",n1,cont,resultado);
		cont++;
	
		
	}
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
