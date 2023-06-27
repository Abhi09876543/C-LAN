#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("ENATR A VALUE A :-");
	scanf("%d",&a);
	printf("ENATR A VALUE B :-");
	scanf("%d",&b);
	printf("ENATR A VALUE C :-");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("A IS MIN VALUES...");
		}
		else{
			printf("C IS MIN VALUES...");
		}
	}
	else{
		if(b<c){
			printf("B IS MIN VALUES...");
		}
		else{
			printf("C IS MIN VALUES...");
		}
	}
	return 0;
}
