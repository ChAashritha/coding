/*The Code of hidden numbers*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
   char str[20];
   int count=0,i;
   fgets(str,sizeof(str),stdin);
   if(str[i]=='\n')
   {
    printf("Invalid Input");
    exit(0);
   }
   for(i=0;str[i]!='\0';i++)
   {
     if(str[i]>='0'&& str[i]<='9')
     count++;
   }
   printf("%d",count);
}