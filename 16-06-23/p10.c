#include<stdio.h>
int main(){
	
	int n,multi=1;
	printf("enter a values=");
	scanf("%d",&n);
	
	do{
		printf("%d x %d = %d \n",n,multi,multi*n);
		multi ++;
		
	}while(multi<=10);
	return 0;
}
