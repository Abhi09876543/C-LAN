#include<stdio.h>
int main(){
	
	int a,n,sum=1;
	printf("Enter a values =");
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		sum += a;
				
	}
	printf("%d",sum);
	return 0;
}
