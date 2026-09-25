/*Ranking*/
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>=90)
    printf("Grade A");
    else if(n>=75 && n<=89)
    printf("Grade B");
    else if(n>=50 && n<=74)
    printf("Grade C");
    else
    printf("Grade D");
}