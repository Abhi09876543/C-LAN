#include<stdio.h>
int main(){
	
	int fact=1,n;

	printf("enter a values :-");
	scanf("%d",&n);
	
	while(fact<=10){ 
		printf("%d x %d = %d\n\n",n,fact,fact*n);
		fact++;
		
	}
		
	
	return 0;
}
