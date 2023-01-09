#include<stdio.h>
#include<stdlib.h>

int main(){
	system("color E");
	int i,j;
	
	for(i=1; i<=5;i++){
		for(j=1;j<=3;j++){
			printf("%3i",i+j);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
	
}
