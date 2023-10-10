#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,d;
	printf("enter the equation:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*a*c;
	float e=(-b/2*a);
	float z=(sqrt(-d))/2*a;
	   if(d>=0){
		//float ans1 = (-b+sqrt(d))/2*a;
		//float ans2 = (-b-sqrt(d))/2*a;
		printf("ans1=%0.2f",(-b+sqrt(d))/2*a);
		printf("ans2=%0.2f",(-b-sqrt(d))/2*a);
	}
	else if(d<0){
		float ans1 = e+z;
		float ans2 = e-z;
		printf("ans1=%0.2f+i%0.2f",e,z);
	    printf("\nans2=%0.2f-i%0.2f",e,z);
		}
	}
