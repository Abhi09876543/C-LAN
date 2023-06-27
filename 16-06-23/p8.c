#include<stdio.h>
int main(){
	
	int a=1,n,sum=1;
	printf("enter a values=");
	scanf("%d",&n);
	
	do{
		sum +=n;
		n--;
		
	}while(a<=n);
	printf("%d",sum);
	return 0;
}
