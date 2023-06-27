#include<stdio.h>
int main(){
	
	int sum=1,a=1,n;
	printf("enter a values :-");
	scanf("%d",&n);
	while(a<=n){ 
		sum += n;
		n--;
		
	}
	printf("%d",sum);	
	
	return 0;
}
