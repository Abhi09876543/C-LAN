#include<stdio.h>
int main(){
	
	int a,x,y,z;
	printf("ENTER X VALUES :- ");
	scanf("%d",&x);
	printf("ENTER Y VALUES :- ");
	scanf("%d",&y);
	printf("ENTER Z VALUES :- ");
	scanf("%d",&z);
	a = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	printf("%d",a);
	
	return 0;
}
