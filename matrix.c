#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	system("color A");
	
	
	int i,j;
	char b = '|';
	
	for(i=0;i<=30;i++){
		for(j=0;j<=30;j++){
			if(j<=i){
				printf("%3c",b);
				Sleep(50);
			}else{
				printf("=");
				Sleep(10);
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("Pause");
	return 0;
}
