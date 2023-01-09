#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float altura;
	char sexo;
	float peso;
	
	printf("selecione o seu sexo [M/F]: ");
	
	sexo = toupper (getche());
	getchar();
	
	printf("digite a sua altura em centimetros: ");
	scanf("%f",&altura);
	
	
	switch (sexo){
		case 'M':
		    peso = (72.7 * altura)- 58;
			
		break;
		
		case 'F':
			 peso = (62.1 * altura) - 44.7;
			
}
	
printf("seu peso ideal eh de: %.1f\n",peso);
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
