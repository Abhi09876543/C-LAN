#include<stdio.h>
int main(){
	
	int a,x,y,z;
	printf("ENTER X VALUES :- ");
	scanf("%d",&x);
	printf("ENTER Y VALUES :- ");
	scanf("%d",&y);
	printf("ENTER Z VALUES :- ");
	scanf("%d",&z);
	a = (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+(3*(z+x)));
	printf("%d",a);
	
	return 0;
}
