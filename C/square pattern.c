/*The Architect of Forbidden Fortress*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char ch;
    scanf("%d",&n);
    scanf("%c",&ch);
    if(scanf("%d %c",&n,&ch)!=2)
    printf("Invalid Input");
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%c",ch);
    }
    }
}