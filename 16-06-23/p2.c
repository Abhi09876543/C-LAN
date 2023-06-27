#include<stdio.h>
int main(){
	
	int a=1,n;
	printf("enter a values=");
	scanf("%d",&n);
	
	do{
		
		printf("%d\n",n);
		n--;
		
	}while(a<=n);
	return 0;
}
