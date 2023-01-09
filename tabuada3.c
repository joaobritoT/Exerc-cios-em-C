#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont = 1;
	int n1;
	int resultado;
	
	printf("digite um numero para ver a tabuada: ");
	scanf("%i",&n1);
	
	do{
		resultado = (n1 * cont);
		printf("%i x %i = %i\n",n1,cont,resultado);
		cont++;
		
	}while(cont<=10);
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
