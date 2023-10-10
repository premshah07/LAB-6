#include<stdio.h>
void main(){
	char c;
	printf("etner the char:");
	scanf("%c",&c);
	if(c>='a' && c<='z'){
		printf("Lowercase=%c",c);
	}
	else if(c>='A' && c<='Z'){
		printf("Uppercase=%c",c);
	}
	else if(c>='0' && c<='9'){
		printf("Digit=%c",c);
	}
	else{
		printf("Special Ops");
	}
}
