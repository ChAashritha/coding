/*The Runeforge Symmetry Ritual*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    if(scanf("%d",&n)!=1||n<=0||n>26)
    printf("Invalid Input");
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        printf("%c",'A'+j);
        for(k=i-2;k>=0;k--)
        printf("%c",'A'+k);
        printf("\n");   
    }
    }
}