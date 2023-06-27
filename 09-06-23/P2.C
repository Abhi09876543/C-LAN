#include<stdio.h>
int main(){
	int a;
	printf("enter a A values =");
	scanf("%d",&a);
	
	
	if(a>0){
		printf("POSITIVE VALUES...");
	}
	else if(a<0){
		printf("NAGETIVE VALUES...");
	}
	else{
		printf("NEUTRAL VALUES...");
	}
	
	return 0;
}
