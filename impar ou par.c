#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	printf("digite um numero\n");
	scanf("%i",&n);
	
	if(n % 2 == 0){
		printf("o numero eh par\n");
		
	}
	else{
		printf("o numero eh impar\n");
	}
	
	
	
	
	
	system("pause");
	return 0;
}
