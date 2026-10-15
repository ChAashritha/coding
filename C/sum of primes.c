/*Alibaba and the chest of prime jewels*/
#include<stdio.h>
void main()
{
    int n,i,count,sum=0,d;
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        count=0;
        d=n%10;
        for(i=2;i<d;i++)
        {
            if(d%i==0 && d>1)
            {
                count++;
                break;
            }
        }
        if(count==0 && d>1)
        sum=sum+d;
    }
    printf("%d",sum);
}