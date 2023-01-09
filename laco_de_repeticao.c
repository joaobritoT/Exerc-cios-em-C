#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont = 1;
	
	/*while (cont<=10){
		printf("%i\n",cont);
		cont +=1;
	}*/
	
	do{
		printf("teste\n");
		cont+=1;
	}while(cont <=10);
	
	
	
	
	system("pause");
	return 0;

}
