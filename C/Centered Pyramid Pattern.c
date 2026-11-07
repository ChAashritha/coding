/*The Forbidden Resurrection Ritual of the Obsidian Pharoahs*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    char c;
    if(scanf("%d %c",&n,&c)!=2)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
                for(k=1;k<=2*i-1;k++)
                {
                    printf("%c",c);
                }
            }
        }
    }
    
}