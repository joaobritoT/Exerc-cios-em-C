#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	int num2;
	float resultado;
	

	
	printf("digite um numero: ");
	scanf("%i",&num1);
	
	printf("digite o segundo numero: ");
	scanf("%i",&num2);
	
	resultado = (float) num1/num2;
	
	printf("%.1f\n",resultado);
	
	
	system("pause");
	return 0;
	
	
}
