/*Scroll of reversed numbers*/
#include<stdio.h>
void main()
{
    int n,rev=0,d;
    scanf("%d",&n);
    if(n>=0)
    {
    for(;n>0;n=n/10)
    {
        d=n%10;
        rev=(rev*10)+d;
    }
    printf("%d",rev);
    }
    else
    printf("Invalid Input");
}