#include<stdio.h>
void main()
{
	int i,j,r1,c1,a[10][10];
	printf("enter the row and column of your matrix\n");
	scanf("%d%d",&r1,&c1);
		printf("enter the element of matrix\n");
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
		printf("the given matrix is:\n");
		for(i=0;i<r1;i++)
		{
		printf("\n");
		for(j=0;j<c1;j++)
		printf("%d\t",a[i][j]);
	    }
		printf("\n");
		printf("the transpose matrix is:\n");
            for(i=0;i<r1;++i)
            {
			printf("\n");
            for(j=0;j<c1;++j)
            printf("%d\t",a[j][i]);
           }
}
