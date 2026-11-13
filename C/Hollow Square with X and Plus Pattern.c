/*The Encrypted Tide Charts of the Abyssal Cartographs*/
#include<stdio.h>
void main()
{
    char ch;
    int n,i,j;
    if(scanf("%c %d",&ch,&n)!=2||n<=0)
    printf("Invalid Input");
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==0||i==n-1||j==0||j==n-1)
         printf("%c ",ch);
         else if(i==j||i+j==n-1||i==n/2||j==n/2)
         printf("%c ",ch);
         else
         printf(" ");
         
        }
        printf("\n");
    }
    }
}