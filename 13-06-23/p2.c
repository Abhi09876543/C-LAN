#include<stdio.h>
int main(){
	char a;
	printf("enter a values =");
	scanf("%c",&a);
	switch(a){
		case 'j':
			printf("January");
			break;
		case 'f':
			printf("February");
			break;
		case 'm':
			printf("March");
			break;
		case 'a':
			printf("April");
			break;
		case 'ma':
			printf("may");
			break;
		case 'ju':
			printf("june");
			break;
		case 'jul':
			printf("july");
			break;
		case 'au':
			printf(" August");
			break;
		case 's':
			printf("September");
			break;
		case 'o':
			printf("October");
			break;
		case 'n':
			printf("November");
			break;
		case 'd':
			printf("December");
			break;
		default:
			printf("invalid ! number");
			break;
			
	}
	
	return 0;
}
