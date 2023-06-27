#include<stdio.h>
int main(){
	
	int a=1,n,fact=1;
	printf("enter a values=");
	scanf("%d",&n);
	
	do{
		fact *=n;
		n--;
		
	}while(a<=n);
	printf("%d",fact);
	return 0;
}
