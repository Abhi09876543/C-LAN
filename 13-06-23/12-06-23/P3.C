#include<stdio.h>
int main(){
	
	int a,b,c,d;
	printf("ENATR A VALUE A :-");
	scanf("%d",&a);
	printf("ENATR A VALUE B :-");
	scanf("%d",&b);
	printf("ENATR A VALUE C :-");
	scanf("%d",&c);
	printf("ENATR A VALUE D :-");
	scanf("%d",&d);
	if(a<b){
		if(a<c){
				if(a<d){
					printf("A IS MIN VALUES...");
				}
				else{
					printf("D IS MIN VALUES...");
				}
			}
		else{
				if(c<d){
					printf("C IS MIN VALUES...");
				}
				else{
					printf("D IS MIN VALUES...");
				}	
			}
	}
	else{
		if(b<c){
			if(b<d){
				printf("B IS MIN VALUES...");	
			}
			else
			{
				printf("D IS MIN VALUES...");
			}
		}
		else{
			if(c<d){
					printf("C IS MIN VALUES...");
				}
				else{
					printf("D IS MIN VALUES...");
				}
		}
	}
	return 0;
}
