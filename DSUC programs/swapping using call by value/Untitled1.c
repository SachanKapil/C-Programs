#include<stdio.h>
float swap(float,float);
int main()
{
	float a,b;
	printf("enter the value of a and b:\n");
	scanf("%f%f",&a,&b);
	swap(a,b);

	return 0;
}
float swap(float a,float b)
{
	float k;
	k=a;
	a=b;
	b=k;
    	printf("after swapping....\nthe value of a=%f and b=%f",a,b);
    return 0;
}
