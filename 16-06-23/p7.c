#include<stdio.h>
int main(){
	
	int n;
	printf("enter a values=");
	scanf("%d",&n);
	
	do{
		if(n%4==0){
			printf("%d\t",n);	
		}
		n++;
		
	}while(n<=3000);
	return 0;
}
