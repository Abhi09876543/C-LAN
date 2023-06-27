#include<stdio.h>
int main(){
	int year;
	printf("\n enetr your values=");
	scanf("%d",&year);
	while(year<=3000){
		
		if(year%4==0){
			printf("%d\n",year);
			
		}
		
		year++;
		
	}
	
	return 0;
}
