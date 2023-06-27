#include<stdio.h>
int main(){
	
	char i,j,k;
	
	for(i='A' ; i<='E' ;i++){
		
		for(k='A';k<i;k++){
			printf(" ");
		}
		
		for(j=i;j<='E';j++){
			if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	
	return 0;
}
