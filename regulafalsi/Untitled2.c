#include<stdio.h>
#include<math.h>
#define err 0.00001
#define f(x) x*x*x-2*x-5
void main()
{
	 int i;
	 float x0=2,x1=3,a=0,b,c,d,p;
	 printf("solution by regula falsi method\nthe equation is x^3-2x-5=0\n");
	 for(i=1;;i++)
	 {
	 	printf("iteration no:%d\nx%d=%f\nx%d=%f\n",i,i-1,x0,i,x1);
	 	b=f(x0);
	 	c=f(x1);
	 	p=a;
	 	a=((x0*c)-(x1*b))/(c-b);
	 	printf("then x%d=%f\n",i+1,a);
	 	d=f(a);
	 	if(d=0)
	 	printf("the correct root is %f",a);
	 	else if(d<0)
	 	x0=a;
	 	else
	 	x1=a;
		if(fabs(p-a)<err)
	    {
	 	printf("the correct root is %f which is correct up to %f\n",a,err );
	    break;
	    }
	  
}
}
	 

