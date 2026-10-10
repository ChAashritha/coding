/*Rockets reverse countdown*/
#include<stdio.h>
void main()
{
    int n,i;
    if(scanf("%d",&n)!=1)
    printf("Invalid Input");
    if(n>0)
    {
    for(i=n;i>0;i--)
    printf("%d ",i);
    }
    else
    printf("Invalid Input");
}