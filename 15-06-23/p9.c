#include<stdio.h>
int main(){
	
	int fact=1,a=1,n;
	printf("enter a values :-");
	scanf("%d",&n);
	while(a<=n){ 
		fact *= n;
		n--;
		
	}
	printf("%d",fact);	
	
	return 0;
}
