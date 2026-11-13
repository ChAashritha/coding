/*The Cursed Loom of the Temporal Weavers*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char ch;
    if(scanf("%d %c",&n,&ch)!=2)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=n;j>0;j++)
            {
                if(j%2==0)
                continue;
                else
                printf("%c ",ch);
            }
            printf("\n");
        }
    }
}