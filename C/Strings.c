/*The Oracle of Echoing Letters*/
#include<stdio.h>
void main()
{
    char str[10];
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[0]=='\n')
    printf("Empty");
    else
    {
    for(i=0;str[i]!='\0';i++)
    printf("%c\n",str[i]);
    }
}