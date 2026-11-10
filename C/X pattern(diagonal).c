/*The Encrypted Manifesto of the Shadowglasss Illusionists*/
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
            for(j=1;j<=n;j++)
            {
                if(j==i||j==(n+1-i))
                printf("%c",ch);
                else
                printf(" ");
            }
            printf("\n");
        }
    }
}