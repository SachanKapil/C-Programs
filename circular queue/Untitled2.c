#include<stdio.h>
#define max 2
void main()
{
	int ch,i,j,f=0,r=0,q[max],item,x;
	do
	{
		printf("main menu:\n");
		printf("press 1 for insertion in  circular queue\n");
		printf("press 2 for deletion in circular queue\n");
		printf("press 3 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				
				if(f==r+1||f==1&&r==max)
				{
				printf(">>>>queue is overflow\n\n\n\n");
				continue;
			    }
			    if(f==0)
				r=f=1;
				else 
				if(r==max)
				r=1;
		     	else{
				r=r+1;
			    x=r;}
				printf("enter the item to be inserted in queue");
				scanf("%d",&item);
				q[r]=item;
				if(f<=r)
				{
				for(i=f;i<=r;i++)
				printf("|%d|\n",q[i]);
			    }
			    else
			    {
			    for(i=1;i<=max;i++)
			    printf("|%d|\n",q[i]);
				}
				 break;
            case 2:
					if(f==0)
					{
						printf(">>>>queue is underflow\n");
						continue;
					}
					item=q[f];
					q[f]=0;	
			    	if(r==f)
			    	{
					
			    	x=r;
				     r=f=0;
				 }
	                 else if(f==max)
					f=1;
					else
                	f=f+1;
                     if(f<=r)
		     	    {
			     	for(i=1;i<=x;i++)
			     	printf("|%d|\n",q[i]);
			        }
			       else
			        {
			          for(i=r;i<=max;i++)
			        printf("|%d|\n",q[i]);	
			      }
                   break;
		}
   }
   while(ch!=3);
}		
			
				
				
