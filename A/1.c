#include<stdio.h>
void main(){
	float a,b;
	char c;
	printf("enter the number:");
	scanf(" %f %f",&a,&b);
	printf("enter the choice==\n'+'\n'-'\n'*'\n'/'=");
	scanf(" %c",&c);
	if(c=='+'){
		printf("sum=%f",a+b);
	}
	else if(c=='-'){
		printf("sub=%f",a-b);
	}
	else if(c=='*'){
		printf("mul=%f",a*b);
	}
	else if(c=='/'){
		    if(b==0){ printf("invalid operator");
			}
			else{
				printf("div=%f",a/b);
			}
	}
}
