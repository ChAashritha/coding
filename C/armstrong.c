/*The Spell of Armstrong charm*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,count=0,sum=0,d,cn,temp;
    scanf("%d",&n);
    if(n>0)
    {
    cn=n;
    temp=n;
    for(;temp>0;temp=temp/10)
    count++;
    for(;n>0;n=n/10)
    {
        d=n%10;
        sum=sum+pow(d,count);
    }
    if(sum==cn)
    printf("Amstrong Charm succeeds");
    else
    printf("Amstrong Charm failed");
    }
    else
    printf("Invalid Input");
}