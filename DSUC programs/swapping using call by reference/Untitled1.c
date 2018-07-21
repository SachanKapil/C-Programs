#include<stdio.h>
float swap(float *,float*);
int main()
{
	float a,b;
	printf("enter the value of a and b:\n");
	scanf("%f%f",&a,&b);
	swap(&a,&b);
	printf("after swapping....\nthe value of a=%f and b=%f",a,b);
	return 0;
}
float swap(float *a,float *b)
{
	int k;
	k=*a;
	*a=*b;
	*b=k;
    return 0;
}
