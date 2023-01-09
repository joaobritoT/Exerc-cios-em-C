#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int numeros[30];
	int cont;
	int i;
	int achei = 0;
	int num;
	
	printf("vc quer digitar quantos numeros?\n ");
	scanf("%i",&cont);
	printf("legal vc podera digitar %i numeros\n",cont);
	fflush(stdin);
	for(i=0;i<cont;i++){
		printf("digite o %i numero: ",i+1);
		fflush(stdin);
		scanf("%i",&numeros[i]);
	}
	
	printf("digite o numero solicitado para ver se eu encontro no vetor: ");
	fflush(stdin);
	scanf("%i",&num);
	
	for(i=0;i<cont;i++){
		if(numeros[i] == num){
			printf("o numero esta na posicao %i\n",i+1);
			achei = 1;
			fflush(stdin);
		}
	}
	 
	 if(achei != 1){
	 	printf("nenhum numero encontrado\n");
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
