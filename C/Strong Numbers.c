/*The Secret of Krishnamurthy's scroll*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,d,sum=0,y;
    scanf("%d",&n);
    if(n>=0)
    {
    y=n;
    if(n==0)
    sum=1;
    for(;n>0;n=n/10)
    {
        d=n%10;
        sum=sum+(int)tgamma(d+1);
    }
    if(sum==y)
    printf("Strong");
    else
    printf("Not Strong");
    }
    else
    printf("Invalid Input");
}