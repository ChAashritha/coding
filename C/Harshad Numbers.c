/*The Trial of Dividing Sun*/
#include<stdio.h>
void main()
{
    int n,i,d,sum=0;
    scanf("%d",&n);
    if(n>0)
    {
    i=n;
    for(;n>0;n=n/10)
    {
        d=n%10;
        sum=sum+d;
    }
    if(i%sum==0)
    printf("Harshad");
    else
    printf("Not Harshad");
    }
    else
    printf("Invalid Input");
}