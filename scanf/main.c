#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    float average;
    char letter;

    printf("enter average");
    scanf("%f",&average);
    printf("enter your age");
    scanf("%d",&age);
    fflush(stdin);
    printf("enter your letter");
    scanf("%c",&letter);

    printf("your age is %d\t your average is %f\t your letter is %c",age,average,letter);
    return 0;
}
