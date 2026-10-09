/*Underscore Kingdom*/
#include<stdio.h>
void main()
{
    char str[20];
    int i;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        printf("_");
        else
        printf("%c",str[i]);
    }
}