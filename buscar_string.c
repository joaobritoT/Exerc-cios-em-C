#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>


int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese");
	
	int n,i,achei=0;
	char cadastro[30][60]; // string
	char letra; // caractere
	
	printf("\tCADASTRO DE ALUNOS.\n");
	printf("========================================\n\n");
	
	printf("Quantos nomes deseja cadastrar? ");
	scanf("%i",&n);
	printf("Legal! Você vai poder cadastrar %i nomes.\n\n",n);
	
	for(i=0;i<n;i++){
		
		printf("Digite o %dº nome:",i+1);
		fflush(stdin);
		gets(cadastro[i]);
	}
	
	printf("\nListar os nomes com a letra solicitada\n");
	printf("========================================\n\n");
	printf("Digite a 1ª letra do nome: ");
	//scanf("%c",&letra);
	letra = toupper(getchar());
	
	// Imprimundo a l;ista de nomes com a letra solicitada
	for(i=0;i<n;i++){
		if(cadastro[i][0]== letra){
			printf("Aluno %2d:  %s\n",i+1,cadastro[i]);
			achei=1;
		}
		
	}
	   if(achei!=1){
	   	printf("Não tem nome com a letra %c\n",letra);
		}
	printf("\n\n");
	
	
	
		printf("========================================\n\n");
	system("pause");
	return 0;
	
}
