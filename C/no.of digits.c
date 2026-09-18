#include<stdio.h>
void main()
{
    int d,n,count=0;
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        d=n%10;
        count=count+1;
    }
    printf("%d",count);
}  