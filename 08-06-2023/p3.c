#include<stdio.h>
int main(){
	
	int a,x,y;
	printf("ENTER X VALUES :- ");
	scanf("%d",&x);
	printf("ENTER Y VALUES :- ");
	scanf("%d",&y);
	a = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	printf("%d",a);
	
	return 0;
}
