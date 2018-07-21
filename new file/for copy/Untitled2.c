#include<stdio.h>

void main()
{
FILE *fp,*ft;
char ch[100],s;
int age,marks,n=1,k;
fp=fopen("kapil.txt","w");
if(fp==NULL)
{
puts("can not open file");
fclose(fp);
}
while(n==1)
{
printf("enter you name and age\n");	
scanf("%s%d",ch,&k);	
fprintf(fp,"%s\n%d",ch,k);
printf("if detail is complete then press 0 otherwise press 1\n");
scanf("%d",&n);
}
fclose(fp);
fp=fopen("kapil.txt","r");
ft=fopen("shubham.txt","w");
if(ft==NULL)
{
puts("can not open file");
fclose(ft);
}
while((s=fgetc(fp))!=EOF)
fputc(s,ft);
fclose(fp);
fclose(ft);
}

