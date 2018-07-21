#include<stdio.h>
void main()
{
	int i=0,ub,lb,data[100],j,temp=0;
	printf("enter the lower bound and upper bound of data" );
	scanf("%d%d",&lb,&ub);
	printf("enter the elements in data");
	for(i=lb;i<=ub;i++)
	{
	scanf("%d",&data[i]);
    }
    for(i=lb;i<=ub;i++)
    {
    	for(j=lb;j<=ub;j++)
    	{
		if(data[j]>data[j+1])
    	{
		temp=data[j];
    	data[j]=data[j+1];
    	data[j+1]=temp;
	    }
	    }
	}
	printf("the sorted data:");
	for(i=lb;i<=ub;i++)
	{
	 	printf("%d\n",data[i]);
    }
	
}
