#include<stdio.h>
int main(){
	char day;
	printf("enter a value :-");
	scanf("%c",&day);
	
	switch(day){
		case 'm':
			printf("monday");
			break;
		case 'w':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'f':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		case 'su':
			printf("Sunday");
			break;
		case 'tu':
			printf("Tuesday");
			break;
		default:
			printf("error");
	}
	
	return 0;
}
