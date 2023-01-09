#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	
	char empresas[4][50];
	int i,achei = 0;
	char achar[50];
	
	for(i=0;i<4;i++){
		printf("cadaste a %i empresa: ",i+1);
		gets(empresas[i]);
		fflush(stdin);
	}
	printf("digite a empresa que quer achar: ");
	gets(achar);
	fflush(stdin);
	
	for(i=0;i<4;i++){
		if(strcmp(empresas[i],achar)==0){
			printf("empresa %s encontrada\n",empresas[i]); 
			achei = 1;
		}
	}	
	if(achei != 1){
		printf("nenhuma empresa encontrada\n");
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}




