#include<stdio.h>
void main(){
      int a,b,c;
	  printf("enter side 1:");
	  scanf("%d",&a);	
	  printf("enter side 2:");
	  scanf("%d",&b);
	  printf("enter side 3:");
	  scanf("%d",&c);
	  if(a==b && b==c){
	  	printf("Triangle is Equilateral");
	  }
	  else if(a==b || b==c || a==c){
	  	printf("Triangle is Isosceles");
	  }
	  else if((a*a)==(b*b)+(c*c)
	  		   || (b*b)==(a*a)+(c*c)
				|| (c*c)==(b*b)+(a*a)){
					printf("Triangle is Right Angled");
				}
	  else{
	  	printf("Triangle is Scalene");
	  }
}
