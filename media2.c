	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1;
	float n2;
	float media;
	
	
	printf("digite a sua primeira nota: ");
	scanf("%f",&n1);
	
	fflush(stdin);
	
	printf("digite a sua segunda nota: ");
	scanf("%f",&n2);
	
	media = (n1+n2) / 2;
	printf("sua media foi de %.2f \n",media);
	
	if (media>=7){
		printf("aprovado\n");
	}
	else if(media >=5 && media <6){
		printf("recuperacao\n");
	}
	else{
		printf("reprovado\n");
	}
	
	
	
	system("pause");
	return 0;
	
	
}
