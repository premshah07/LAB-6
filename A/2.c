#include<stdio.h>
void main(){
	float GS,HRA,DA,BS;
	printf("enter basic salary:");
	scanf("%f",&BS);
	if (BS>=10000){
		HRA = 0.20*BS;
		DA = 0.80*BS;
	}
	else if (BS>=20000){
		HRA = 0.20*BS;
		DA = 0.80*BS;
	}
	else if (BS>=30000){
		HRA = 0.20*BS;
		DA = 0.80*BS;
	}
   GS=BS+HRA+DA;
   printf("GS=%f",GS);
}
