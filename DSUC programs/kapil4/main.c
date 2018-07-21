#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i,sum;
    printf("enter any number");
    scanf("%d",&num);
    for(i=1;i<10;i++)
   {
    sum=num+i;
   }
    printf("sum of 1 to 9=%d",num);
    return 0;

}
