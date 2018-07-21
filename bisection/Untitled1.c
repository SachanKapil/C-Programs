#include<stdio.h>
#define err 0.001
#define f(x) (x*x*x)-x-1
void main()
{
	 int i;
	float a=1,b=2,y,r;
	printf("solution by bisection method\nthe equation is x^3-x-1\n");
	 for(i=1;b-a>err;i++)
	 {
	 	printf("iteration no:%d\nsmall range=%f and big range=%f\n",i,a,b );
	 	y=(a+b)/2;
	 	r=f(y);
	    printf("x%d=%f\n",i,y);
	 	if(r<0)
	 	a=y;
	 	else
	 	b=y;
	 }	
	 printf("the correct root is %f which is correct up to %.3f\n",y,err );
	
}

