#include<stdio.h>
int add(int);
void main()
{
	int a;
	printf("enter the number to find addition up to that number:\n");
	scanf("%d",&a);
	printf("afer addition....\nsum=%d",add(a));
}
int add(int a)
{
	int i=1,add=0;
	for(i=1;i<=a;i++)
	{
	add=add+i;	
	}
	return add;
}
