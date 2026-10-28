/*The Pharanoah's neon tablet*/
#include<stdio.h>
void main()
{
    int n,y,i,sum=0,d;
    scanf("%d",&n);
    if(n>=0)
    {
    y=n*n;
    for(;y>0;y=y/10)
    {
        d=y%10;
        sum=sum+d;
    }
    if(sum==n)
    printf("Neon");
    else
    printf("Not Neon");
    }
    else
    printf("Invalid Input");
}