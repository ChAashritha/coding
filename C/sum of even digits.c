/*The kingdom of twin crystals*/
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
        else
        continue;
    }
    printf("%d",sum);
}