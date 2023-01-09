#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int teste = 0;
	
	
	
	for(teste = 0; teste<10; teste++){
		printf("%i\n", rand() %36);
	}

	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}

