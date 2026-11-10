/*The Forgotten Weaponsmith's Prophecy of Kurushetra*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    char ch;
    if(scanf("%d %c",&n,&ch)!=2||n<=0)
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
        for(i=n-1;i>0;i--)
        {
            for(j=n-i;j>0;j--)
            printf(" ");
            for(k=2*i-2;k>0;k--)
            printf("%c",ch);
            printf("\n");
        }
    }
}