/*Mystic number in the crystal orb*/
#include<stdio.h>
void main()
{
    int i,n,count=0,d;
    scanf("%d",&n);
    if(n==0)
    printf("1");
    else
    {
    for(i=0;n>0;n=n/10)
    {
        d=n%10;
        count++;
    }
    printf("%d",count);
    }
}