/*The Mycelium Unraveling Protocol*/
#include<stdio.h>
void main()
{
   int n,i,j;
   char ch='A';
   if(scanf("%d",&n)!=1||n<=0||n>26)
   printf("Invalid Input");
   else
   {
       for(i=0;i<n;i++)
       {
           for(j=0;j<n-i;j++)
           {
             printf("%c ",ch++);
             
           }
           printf("\n");
           ch='A';
       }
   }
}