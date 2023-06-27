#include<stdio.h>
int main(){
	int a=1,n;
	printf("enter a values :");
	scanf("%d",&n);
	
	while(a<=n){
		if(a%2==1){
		
		printf("%d\n",a);
		}
		a++;
	}
	
	return 0;
}
