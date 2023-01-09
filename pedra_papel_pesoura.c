#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int computador;
	int jogador;
	
	
	printf("JOGO DO JOKENPO\n");
	printf("PEDRA[1], PAPEL[2], TESOURA[3]\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Digite a sua escolha: \n");
	scanf("%i",&jogador);
	
	
	//logica do computador
	srand(time(NULL));
	computador = ("%i",rand()%3+1); // valores aleatorios entre 3 valores aleatorios
	
	switch(jogador){
		case 1:
			printf("jogador escolheu pedra\n");
		break;
		case 2:
			printf("jogador escolheu papel\n");
		break;
		case 3:
			printf("jogador escolheu tesoura\n");
		break;
		
	}
	
	switch(computador){
		case 1:
			printf("computador escolheu pedra\n");
		break;
		case 2:
			printf("computador escolheu papel\n");
		break;
		case 3:
			printf("computador escolheu tesoura\n");
		break;
	}
	
	if(jogador == computador){
		printf("empate\n");
	}
	else if((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)){
		printf("Jogador ganhou\n");
	
	} 
	else{
		printf("computador ganhou\n");
	}
	
	
	

	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
	
	
}
