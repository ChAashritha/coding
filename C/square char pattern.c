/*The Haunted Symphony of the Fractured Conservatory*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char ch;
    if(scanf("%d%c",&n,&ch)!=2)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            printf("%c ",ch);
            printf("\n");
        }
    }
}