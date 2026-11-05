/*The Signal in endless transmission*/
#include<stdio.h>
void main()
{
    char str[20],ch;
    int i,count=0;;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&ch);
    if(str[0]=='\0'||str[0]=='\n')
    printf("Invalid Input");
    else
    {
    for(i=0;str[i]!='\0';i++)
    {
        count++;
     if(str[i]==ch)
     {
         printf("%d",count);
         break;
     }
    }
    }
}