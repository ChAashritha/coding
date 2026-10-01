/*Scroll of countless letters*/
#include<stdio.h>
#include<ctype.h>
void main()
{
    char ltr[50];
    int count=0,i;
    getchar();
    fgets(ltr,sizeof(ltr),stdin);
    for(i=0;ltr[i]!='\0';i++)
    {   if(ltr[i]=='\n')
       continue;
        count++;
    }
    printf("%d",count);
}