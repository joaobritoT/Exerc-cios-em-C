#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	system("color F0");
	//setlocale(LC_ALL,"Portuguese");
	
	int i,j;
	int valor;
	
	printf("criando um tabuleiro de xadrez\n");
	sleep(1); 
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			valor = i+j;
			if(valor %2 ==0){
				Sleep(100);
				printf("\xDB\xDB");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("fim :)\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
