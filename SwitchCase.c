#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	
	
	
	printf("digite uma letra: ");
	
	letra = toupper(getche()); //capturar um caractere
	getchar();
	
	switch(letra){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("voce digitou a vogal %c\n",letra);
		break;
		
		default:
			printf("voce digitou a consoante %c\n",letra);
	}
	
	
	
	
	
	system("pause");
	return 0;
	
}
