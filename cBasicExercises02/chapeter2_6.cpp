#include<stdio.h>
main()
{
   int x,a,b,c;                           
   scanf("%d",&x);     
	a = x%10;
	b  = x/10%10; 
	c = a*10+b;
   printf("%d",c); 
}


