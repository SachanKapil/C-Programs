#include<stdio.h>
#define max 2
void main()
{
	int top=0,i,stack[max],item,ch,y,real;
		do
		{
			printf("main menu:");
			printf("\n1. push(insert) in the stack");
			printf("\n2. pop(delete) in the stack");
			printf("\n3. exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
			    if(top==max)
			    {
			   	printf("stack is over flow\n");
			   	continue;
			    }
				else
				{
				printf("enter the element to be insert\n");	     	
				scanf("%d",&item);
				top++;
				stack[top]=item;
				real=top;
				printf("the stack is:\n");
				for(i=top;i>0;i--)
                printf("| %d|\n",stack[i]);
                }
			    break;
			     
				case 2:
		     	if(top==0)
		     	{
		    	printf("the stack is under flow\n");
		    	continue;
				}
		    	else
				{
				 
		        item=stack[top];
		        stack[top]=0;
				--top;
			     printf("the stack is:\n");
				for(i=real;i>0;i--)
				printf("| %d |\n",stack[i]);
			   }
				break;
			}
                 }while(ch!=3);
		}

