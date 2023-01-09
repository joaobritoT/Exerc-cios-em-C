#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

struct ficha_aluno{
	char nome[50];
	float n1;
	float n2;
	float media;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct ficha_aluno aluno;
	
	printf("digite o nome do aluno:\n");
	fflush(stdin);
	gets(aluno.nome);
	
	printf("digite a primeira nota:\n");
	scanf("%f",&aluno.n1);
	
	printf("digite a segunda nota:\n");
	scanf("%f",&aluno.n2);
	
	aluno.media = (aluno.n1 + aluno.n2) / 2;
	
	printf("a media foi: %.2f\n",aluno.media);
		
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
