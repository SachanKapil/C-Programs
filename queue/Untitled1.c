#include<stdio.h>
#define max 1
void main()
{
	int ch,i,f=0,r=0,q[max],item;
	do
	{
		printf("main menu:\n");
		printf("press 1 for insertion in queue\n");
		printf("press 2 for deletion in queue\n");
		printf("press 3 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				
				if(r==max)
				{
				printf(">>>>queue is overflow\n\n\n\n");
				continue;
			    }
			    if(r==0)
				r=f=1;
				else
		     	r=r+1;
				printf("enter the item to be inserted in queue\n");
				scanf("%d",&item);
				q[r]=item;
				for(i=f;i<=r;i++)
				printf("|%d|\n",q[i]);
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
					f=0;
					else
					f=f+1;
					for(i=1;i<=r;i++)
			     	printf("|%d|\n",q[i]);
					break;
		}
   }
   while(ch!=3);
}		
			
				
				
