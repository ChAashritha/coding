/*First and last*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ltr[50];
    int i,x;
    fgets(ltr,sizeof(ltr),stdin);
    x=strlen(ltr);
    if(x==0 || ltr[0]=='\0'||ltr[0]=='\n')
    {
    printf("Invalid Input");
    return 0;
    }
    for(i=0;ltr[i]!='\0';i++)
    {   if(i==0)
     {
        printf("%c ",ltr[i]);
        if(x-1=='\n')
         printf("%c ",ltr[x-1]);
        else 
        printf("%c",ltr[x-2]);
    }
        else
        continue;
    }
    return 0;
    
}