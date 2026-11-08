/*The Cursed ClockTower of the Mirrored Astronomers*/
#include<stdio.h>
void main()
{
    int n,i,j;
    if(scanf("%d",&n)!=1||n<=0)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            printf("%d ",i);
            printf("\n");
        }
    }
}