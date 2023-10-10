#include<stdio.h>
void main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	a=a%10;
	if (a%2==0){
		printf("%d is even",a);
	}
	else{
		printf("%d is odd",a);
	}
}
