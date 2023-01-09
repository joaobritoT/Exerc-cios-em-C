#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1;
	float n2;
	float n3;
	float n4;
	
	printf("digite a primeira nota: ");
	scanf("%f",&n1);
	
	fflush(stdin);
	
	printf("digite a segunda nota: ");
	scanf("%f",&n2);
	
	fflush(stdin);
	
	printf("digite a terceira nota: ");
	scanf("%f",&n3);
	
	fflush(stdin);
	
	printf("digite a quarta nota: ");
	scanf("%f",&n4);
	
	float media = (n1 + n2 + n3 + n4) / 4;
	
	if (media<5){
		printf("voce foi reprovado, sua media foi de %.1f", media);
	}else{
		printf("voce foi aprovado, sua media foi de %.1f",media);
	}
	
	
	system("pause");
	return 0;
	
}
