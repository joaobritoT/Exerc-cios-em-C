#include <stdio.h> // entrada de saida de dados
#include <stdlib.h> // funcao do sistema
#include <locale.h> // acentuacao
#include <conio.h> // console de entrada e saida de string
	

int main(){ // funcao principal
	
	setlocale(LC_ALL,"Portuguese"); // funcao para incluir acento
	 
	 int numero; // variavel tipo inteiro
	 float salario; // variavel real
	 char letra; // reserva um unico caractere
	 char palavra[50]; // reserva a quantidade de caracteres declarados (sem espaco)
	 char nome[50];
	 
	 printf("digite um numero: ");
	 scanf("%i",&numero);
	 
	 printf("digite o seu salario: R$");
	 scanf("%f",&salario);
	 
	 fflush(stdin); //  limpar memoria do teclado
	 
	printf("digite ume letra: ");
	scanf("%c",&letra);
	
	fflush(stdin);
	 
	 printf("digite seu nome: ");
	 scanf("%s",&palavra);
	 
	 fflush(stdin);
	 
	 printf("digite seu nome completo: ");
	 gets(nome); // ja sabe que eh string
	 
	 
	 printf("o numero digitado foi: %i \n", numero);
	 printf("seu salario eh de R$ %.2f \n", salario);	
	 printf("a letra digitada eh: %c \n", letra);
	 printf("seu nome eh: %s \n", palavra);
	
	system("pause"); // pausa antes de sair do sistema
	return 0;
	
}
