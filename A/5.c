#include<stdio.h>
void main(){
	float m1,m2,m3,m4,m5;
	printf("enter marks=");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	float per=(m1+m2+m3+m4+m5)/5;
	if(per<35){
		printf("fail=%f",per);
	}
	else if(per<=45){
		printf("pass=%f",per);
	}
	else if(per<=60){
		printf("second class=%f",per);
	}
	else if(per<=70){
		printf("first class=%f",per);
	}
	else if(per>70){
		printf("dist=%f",per);
	}
}
