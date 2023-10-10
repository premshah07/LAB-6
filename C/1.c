#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	printf("enter number 3:");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a is the first largest");
		if(b>c){
			printf("\nb is the second largest");
			}
		else{
		printf("\nc is the second largest");
	    }	
	}
	else if(b>a && b>c){
		printf("b is the first largest");
			if(a>c){
				printf("\na is the second largest");
		    }
		    else{
		printf("\nc is the second largest");
			}
	}
	else if(c>a && c>b){
		printf("c is the first largest");
	} 
		//if(b>c && b>a){
			//printf("\nb is the second largest");
		}

