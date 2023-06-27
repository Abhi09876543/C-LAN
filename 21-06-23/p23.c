#include<stdio.h>
int main(){
	
	char i,j,k;
	
	for(i='A' ; i<='E' ;i++){
		
		for(k='E';k>i;k--){
			printf(" ");
		}
		
		for(j='A';j<=i;j++){
			if(j%2==0){
				printf("-");
			}
			else{
				printf("|");
			}
		}
		printf("\n");
	}
	
	return 0;
}
