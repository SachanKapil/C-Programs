
# include <stdio.h>
void main()
{
int n;
int i,j;
float ax[10],ay[10],x,y = 0,h,p,diff[20][20],y1,y2,y3,y4;
printf("\n Enter the number of terms - ");
scanf("%d",&n);
printf("Enter the value in the form of x - ");
for (i=0;i<n;i++)
{
printf("Enter the value of x%d - ",i+1);
scanf("%f",&ax[i]);
}
printf("\n Enter the value in the form of y - ");
for (i=0;i<n;i++)
{
printf ("Enter the value of y%d - ", i+1);
scanf ("%f",&ay [i]);
}
printf("\nEnter the value of x for");
printf("\nwhich you want the value of y - ");
scanf("%f",&x);
h=ax[1]-ax[0];
for(i=0;i<n-1;i++)
{
diff[i][1]=ay[i+1]-ay[i];
}
for(j=2;j<=n;j++)
{
for(i=0;i<n-j;i++)
{
diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
}
}
p=(x-ax[0])/h;
y1=p*diff[0][1];
y2=p*(p-1)*diff[0][2]/2;
y3=(p-2)*p*(p-1)*diff[0][3]/6;
y4=(p-3)*(p-2)*p*(p-1)*diff[0][4]/24;
y=ay[0]+y1+y2+y3+y4;
printf("\nwhen x=%f, y=%f ",x,y);
}
