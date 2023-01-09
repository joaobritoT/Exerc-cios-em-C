#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>


//A TABUADA SO PARA QUANDO DIGITAR 0


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1;
	char resp;
	int resultado;
	int teste =1;
	
	
	while(teste >0){
		printf("digite um numero para ver a tabuada(0 para fechar): ");
		scanf("%i",&n1);
		int cont =0;
		if(n1 == 0){
			break;
		}
		while(cont<10){
			cont++;
			resultado = (n1 * cont);
			printf("%i x %i = %i\n",n1,cont,resultado);
			
		}
	}
	

	system("pause");
	return 0;
}
