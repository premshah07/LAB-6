#include<stdio.h>
void main(){
	float bill,unit;
	printf("enter the unit:");
	scanf("%f",&unit);
	if(unit<=50){
		bill=0.5*unit;
	}
	else if(unit<=150){
		bill=(50*0.5)+(unit-50)*0.75;
	}
	else if(unit<=250){
		bill=(50*0.5)+(100*0.75)+(unit-150)*1.20;
	}
	else if(unit>250){
		bill=(50*0.5)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
	}
	float total_bill=bill+(0.2*bill);
	printf("total bill=%0.2f",total_bill);
	
}

