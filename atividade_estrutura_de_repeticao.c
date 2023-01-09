#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>




int main(){
	
	setlocale(LC_ALL,"Portugues");
	
	int cont ;
	char nome[30];
	int sexo ;
	int idade; 
	
	for(cont =1; cont<=20; cont++){
		printf("-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-==-\n");
		printf("pessoa %i\n",cont);
		printf("nome: ");
		scanf("%s",&nome);
		fflush(stdin);
		printf("idade: ");
		scanf("%i",&idade);
		fflush(stdin);
		printf("sexo [1] masc [2] fem: ");
		scanf("%i",&sexo);
		if(sexo == 1 && idade>=20){
			fflush(stdin);
			printf("erro, nao e possivel cadastrar um homem com mais de 20 anos\n");
			cont--;
		}
	
		
	}
	

	
	
	
	
	
	
	system("pause");
	return 0;
}
