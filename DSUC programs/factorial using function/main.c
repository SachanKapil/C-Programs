#include <stdio.h>
void fact(int);
void main()
{

    int n;
    printf("enter the number whoose you want");
    scanf("%d",&n);
    fact(n); 
}
void fact(int n)
{
    int m=1,i;
    for(i=1;i<=n;i++)
    m=m*i;
    printf("the factorial of that number=%d\n",m);   
}
