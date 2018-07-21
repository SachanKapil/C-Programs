#include<stdio.h> 
#include<stdlib.h>
 struct Node
 {
        int Data;
        struct Node* next;
 }*rear=NULL, *front=NULL;

void delQueue()
{
       if(front==NULL)
      printf("\nQueue Empty");
      else
      {
      	printf("\ndeleted element: %d",front->Data);
      	front=front->next;
	  }
}

void push(int value)
{
     struct Node *temp;
     temp=(struct Node *)malloc(sizeof(struct Node));
     temp->Data=value;
     if (front == NULL)
     {
           rear=temp;
           rear->next=NULL;
           front=rear;
     }
     else
     {
           rear->next=temp;
           rear=temp;
           rear->next=NULL;
     }
}

void display()
{
     struct Node *var=front;
     if(var!=NULL)
     {
           printf("\nElements are as:  ");
           while(var!=NULL)
           {
                printf("\t%d",var->Data);
                var=var->next;
           }
     printf("\n");
     } 
     else
     printf("\nQueue is Empty");
}

int main()
{
     int i=0;
     printf(" \n1. Push to Queue");
     printf(" \n2. Pop from Queue");
     printf(" \n3. Display Data of Queue");
     printf(" \n4. Exit\n");
     while(1)
     {
          printf(" \nChoose Option: ");
          scanf("%d",&i);
          switch(i)
          {
                case 1:
                {
                     int value;
                     printf("\nEnter a value to push into Queue: ");
                     scanf("%d",&value);
                     push(value); 
                     break;
                }
                case 2:
                {
                     delQueue();
                     break;
                }
                case 3:
                {
                     display();
                     break;
                }
                case 4:
                {
                     exit(0);
                }
                default:
                {
                     printf("\nwrong choice for operation");
                }
          }
     }
}
