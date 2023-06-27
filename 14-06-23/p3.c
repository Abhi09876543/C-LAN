#include<stdio.h>
int main(){
	
	int a,b,c,d;
	printf("ENTER A VALUES :-");
	scanf("%d",&a);
	printf("ENTER A VALUES :-");
	scanf("%d",&b);
	printf("ENTER A VALUES :-");
	scanf("%d",&c);
	printf("ENTER A VALUES :-");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}	
			else{
				printf("d is max");
			}
		}
		else{
			if(c>d){
				printf("c is max");
			}
			else{
				printf("d is max");
			}
		}
	}	
	else{
			if(b>c){
			if(b>d){
				printf("b is max");
			}	
			else{
				printf("d is max");
			}
		}
		else{
			if(c>d){
				printf("c is max");
			}
			else{
				printf("d is max");
			}
		}		
	}
	return 0;
}
