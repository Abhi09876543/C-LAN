//wpn to input any character and check whether it is alphabet,digit or special character..
#include<stdio.h>
int main(){
	
	char values;
	
	printf("ENATR A VALUES =");
	scanf("%c",&values);
	
	if((values>='a' && values<='z') || (values>='A' && values<='z')){
		printf("ALPHABET...");
	}	
	else if(values>='0' && values<='9'){
		printf("DIGIT...");
	}
	else{
		printf("SPECIAL CHARACTER...");
	}
	
	
	return 0;
}
