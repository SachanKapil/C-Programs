#include<stdio.h>
#include<ctype.h>
int s[10];
int top=0;
void push(int item)
{
	top=top+1;
	s[top]=item;
}
int pop()
{
	return(s[top--]);
}
void main()
{
	char str[10],ch;
	int i=0,op1,op2,n,temp,k,sum;
	printf("enter the length of expression\n");
	scanf("%d",&n);
	printf("enter the postfix expression\n");
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		ch=str[i];
		if(isdigit(ch))
		push(ch-'0');
		else
		{
		op1=pop();
		op2=pop();
	    switch(ch)
	    {
	    	case '+':
		    push(op2+op1);
	    	break;
	    	case '-': 
			push(op2-op1);
	    	break;
	    	case '*':
			push(op2*op1);
	    	break;
	    	case '/':
			push(op2/op1);
	    	break;
	    }
	}
}
printf("the result is %d",s[top]);
}
