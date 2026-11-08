/*The Forbidden Genome Sequence of the Crytalline Biologists*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    char ch;
    if(scanf("%d %c",&n,&ch)!=2)
    printf("Invalid Input");
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            printf(" ");
            for(k=1;k<=2*i-1;k++)
            printf("%c",ch);
            printf("\n");
        }
    }
}