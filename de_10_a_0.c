#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int cont = 10;
	
	while (cont !=0){
		printf("%i\n",cont);
		cont-=1;
	}
	
	
	
	
	
	
	system ("pause");
	return 0;
}
