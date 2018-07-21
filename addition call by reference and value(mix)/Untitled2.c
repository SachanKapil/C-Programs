#include<stdio.h>
int add(int,int *);
void main()
{
	int a,b;
	printf("enter the number to find addition up to that number:\n");
	scanf("%d",&a);
	add(a,&b);
	printf("afer addition....\nsum=%d",b);
}
int add(int a,int *b)
{
	int i=1,add=0;
	for(i=1;i<=a;i++)
	{
	add=add+i;
	*b=add;	

	}
}
