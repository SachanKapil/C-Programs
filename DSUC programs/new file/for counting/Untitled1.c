#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char ch[100],s;
int noc=0,nov=0,nos=0,nol=0;
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
fputs("\n",fp);
}
fclose(fp);
fp=fopen("kapil.txt","r");
while((s=fgetc(fp))!=EOF)
{
	noc++;
	if(s=='a'||s=='e'||s=='o'||s=='u'||s=='i')
	nov++;
	if(s==' ')
	nos++;
	if(s=='\n')
	nol++;
}
fclose(fp);
printf("characters=%d",noc);
printf("vowels=%d",nov);
printf("spaces=%d",nos);
printf("lines=%d",nol);
}


