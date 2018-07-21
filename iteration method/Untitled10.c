#include<stdio.h>
#include<math.h>
#define err 0.001
#define f(x) (x*x*x)+x*x-1
void main()
{
	 int i;
	float a=0.75,p,b;
	printf("solution by iteration method\nthe equation is x^3+x^2-1=0\n");
	 for(i=1;;i++)
	 {
	 	printf("iteration no:%d\nx%d=%f\n",i,i-1,a);
	 	p=a;
	 	b=pow((a+1),(0.5));
	 	a=1/b;
	    printf("then x%d=%f\n",i,a);
	 	if(fabs(p-a)<err)
	 	{
		printf("the correct root is %f which is correct up to %f\n",a,err);
	break;
     	}
     }
	
}

