#include<stdio.h>
int main(){
	
	char i,j,count=1;
	
	for(i='A' ; i<='E' ; i++){
		for(j='A' ; j<=i ; j++){
			printf("%c ",count);
			count++;
		}
		printf("\n");
	}
	
	return 0;
}
