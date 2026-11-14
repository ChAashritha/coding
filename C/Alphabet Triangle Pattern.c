/*The Zylox Transmission Problem*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char ch='A';
    if(scanf("%d",&n)!=1||n<=0||n>26)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=0;j<i;j++)
            printf("%c ",ch++);
            printf("\n");
            ch='A';
        }
    }
}