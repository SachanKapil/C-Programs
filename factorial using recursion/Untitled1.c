#include<stdio.h>
int fact(int,int);
int main()
{

    int n,m,f=1;
    printf("enter the number whoose you want factorial\n");
    scanf("%d",&n);
    m=fact(f,n);
	printf("the factorial of that number=%d\n",m);
	return 0;  
}
int fact(int f,int n)
{
    if(n==0)
    {
	 return 1;
    }
    else
    {
    
    f=n*fact(f,n-1);
    }
	return f;

}
    
	

