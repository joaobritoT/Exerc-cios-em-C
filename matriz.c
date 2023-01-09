#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 3

int main(){
	
	
	int matriz[L][C];
	int i,j;
	
	printf("Matriz de numeros\n\n");
	
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("Digite o numero da posicao[%i][%i]: ",i,j);
			scanf("%i",&matriz[i][j]);
			fflush(stdin);
		}
		
		fflush(stdin);
	}
	
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
		printf("%4i",matriz[i][j]);
		fflush(stdin);
		
		}
		
		printf("\n");
		fflush(stdin);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
