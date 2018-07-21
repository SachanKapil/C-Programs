#include<stdio.h>
void main()
{
	int d,m,y;
	while(1)
	{
printf("\nenter day,month and year of any date to check the date is valid or not?>>>\n ");
scanf("%d%d%d",&d,&m,&y);
if(d>=1&&d<=31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
printf("the date is valid");
else if(d>=1&&d<=30&&(m==4||m==6||m==9||m==11))	
printf("the date is valid");
else if(m==2)
     {
     	if ( d>=1&&d<=29&&y%400 == 0)
    printf("date is valid");
  else if (d>=1&&d<=28&&y%100 == 0)
    printf("date is valid");
  else if ( d>=1&&d<=29&&y%4 == 0 )
    printf("date is valid");
  else if(d>=1&&d<=28)
    printf("date is valid"); 
	else
	printf("invalid date");
	 }
	 else
	 printf("invalid date");
    }
}
