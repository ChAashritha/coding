#include<stdio.h>
void main()
{
    int sum=0,i,d,n;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
    d=n%10;
    sum=sum + d;
    n=n/10;
    
    }
    printf("%d",sum);
    
    
}