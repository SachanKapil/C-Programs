#include<stdio.h>
void main()
{
int n,i,j,k;
float mx[10],my[10],x,x0=0,y0,sum,h,fun,p,diff[20][20];
printf("\n enter the no. of terms - ");
scanf("%d",&n);
printf("\n enter the values of x:");
for(i=0;i<n;i++)
scanf("%f",&mx[i]);
printf("\n enter the values of y:");
for(i=0;i<n;i++)
scanf("%f",&my[i]);
printf("\n enter the value of x for");
printf("\nwhich you want the value of of y:");
scanf("%f",&x);
h=mx[1]-mx[0];
for(i=1;i<n;i++)
diff[i][1]=my[i]-my[i-1];
for(j=2;j<=n-1;j++)
{
for(i=j;i<n;i++)
diff[i][j]=diff[i][j-1]-diff[i-1][j-1];
}
i=n-1;
x0=mx[i];
sum=0;
y0=my[i];
fun=1;
p=(x-x0)/h;
sum=y0;
for(k=1;k<=n;k++)
{
fun=(fun*(p+(k-1))/k);
sum=sum+fun*diff[i][k];
}
printf("\n when x=%f,y=%f",x,sum);
printf("\n press enter to exit");
getch();
}
