/*Number of Divine Balence*/
#include<stdio.h>
void main()
{
    int n,i,d,sum=0,y;
    scanf("%d",&n);
    y=n;
    if(n>0)
   {
    for(;n>0;n=n/10)
    {
        d=n%10;
        for(i=2;i<d;i++)
        {
            if(d%i==0)
            sum=sum+i;
        }
    }
    if(sum==y)
    printf("Perfect");
    else
    printf("Not Perfect");
   }
   else
   printf("Invalid Input");
}