#include <stdio.h>
#include <stdlib.h>
#define TAM 5




int main(){
	
	
	int numeros[4];
	int i,aux,cont;
	
	
	printf("digite %i numeros inteiros:\n ",TAM);
	for(i=0;i<TAM;i++){
		scanf("%i",&numeros[i]);
	}
	printf("ordem dos numeros: ");
	for(i=0;i<TAM;i++){
		printf("%i",numeros[i]);
	}
	
	printf("\nNumeros em ordem crescente:\n");
	
	for(cont=1;cont<TAM;cont++){
		for(i=0;i<TAM;i++){
			if(numeros[i]>numeros[i+1]){
				aux=numeros[i];
				numeros[i] =numeros[i+1];
				numeros[i+1]=aux; 
			}
		}
	}
	
	for(i=0;i<TAM;i++){
		printf("%i",numeros[i]);
	}
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
