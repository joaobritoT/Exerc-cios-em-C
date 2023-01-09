#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float nota ;
	float soma = 0;
	float media;
	int cont = 1;
	
	
	
	while(cont<=4){
		printf("digite a nota: ");
		scanf("%f",&nota);
		soma = soma + nota;
		cont++;
	}
	
	media  = (soma / 4);
	printf(" a media foi de %.2f\n", media);
	
	
	
	
	
	
	system("pause");
	return 0;
}
