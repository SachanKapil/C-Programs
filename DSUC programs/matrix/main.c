#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,a[10][10],b[10][10],r1,r2,c1,c2,n,add[10][10],sub[10][10],mult[10][10],k;
    printf("enter the row and coloum of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and coloum of second matrix\n");
    scanf("%d%d",&r2,&c2);
    printf("enter the element of first matrix:\n");
    for(i=0;i<r1;++i)
    for(j=0;j<c1;++j)
    {
        printf("enter the element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("enter the element of second matrix:\n");
    for(i=0;i<r2;++i)
    for(j=0;j<c2;++j)
    {
        printf("enter the element b%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    while(n=3)
	{
    printf("press 1 for addition or 2 for subtraction or 3 for multiplication\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        if(r1==r2 && c1==c2)
        {
           printf("matrix after addition:\n");
           for(i=0;i<r2;++i)
           {
             for(j=0;j<c2;++j)
             {
             add[i][j]=a[i][j]+b[i][j];
             printf("%d\t",add[i][j]);
             }
             printf("\n");
           }
        }
        else
        {
          printf("addition is not possible because row or coloum of both matrix is not same");
        }
        break;
        case 2:
        if(r1==r2 && c1==c2)
        {
           printf("matrix after subtraction:\n");
           for(i=0;i<r2;++i)
           {
             for(j=0;j<c2;++j)
             {
             sub[i][j]=a[i][j]-b[i][j];
             printf("%d\t",sub[i][j]);
             }
              printf("\n");
           }
        }
        else
        {
          printf("subtraction is not possible because row or coloum of both matrix is not same");
        }
        break;
        case 3:
        if(c1==r2)
        {
          printf("\n matrix after multiply:\n");
           for(i=0;i<r1;++i)
           {
             for(j=0;j<c2;++j)
             {
             	mult[i][j]=0;
               for(k=0;k<r2;++k)
			   {
			     mult[i][j]+=a[i][k]*b[k][j];
			   }
		       printf("%d\t",mult[i][j]);
		     }
             printf("\n");
           }
       }
         else
        {
          printf("multiplication is not possible because c1 is not equal to r2");
        }
        break;
       }

   }
}
