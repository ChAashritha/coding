/*The Carnival of the Fractured Clockmaker*/
#include<stdio.h>
void main()
{
    int n,i,j,num=1;
    if(scanf("%d",&n)!=1||n==0)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            printf("%d ",num++);
            printf("\n");
        }
    }
}