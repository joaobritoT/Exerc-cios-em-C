#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float notas[4];
	int i;
	float soma = 0;
	float media;
	
	for(i=0;i<=4;i++){
		printf("digite a %i nota: ",i+1);
		fflush(stdin);
		scanf("%f",&notas[i]);
		soma = soma+notas[i];
	}
	
	for(i=0;i<=4;i++){
		printf("nota[%i] - %.2f\n",i+1,notas[i]);
	}
	media = soma/i;
	printf("media: %.1f\n",media);
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
