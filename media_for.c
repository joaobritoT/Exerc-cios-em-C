#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <locale.h>






int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float soma;
	int cont;
	int n1;
	float media;
	
	for(cont = 0; cont<10; cont++){
		printf("digite um numero: ");
		scanf("%i",&n1);
		fflush(stdin);
		soma = soma +n1;
	
	}
	media = soma /10;
	printf("a soma dos numeros deu: %.1f\n",media);
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
