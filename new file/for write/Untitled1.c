#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char ch[100];
fp=fopen("kapil.txt","w");
if(fp==NULL)
{
puts("can not open file");
fclose(fp);
}
puts("enter text");
while(strlen(gets(ch))>0)
{
fputs(ch,fp);
}
fclose(fp);
}

