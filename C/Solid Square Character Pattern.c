/*The Forbidden Score of the Phantom Orchestra*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char ch;
    if(scanf("%c %n",&ch,&n)!=2)
    printf("Invalid Input");
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0||i==n-1)
                printf("%c",ch);
                else 
                {
                    if(i>0 && i<n-1||j==0||j==n-1) printf("%c",ch);
                    else printf(" ");
                }
            }
        }
    }
}    