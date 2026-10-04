/*Scroll of invisible message*/
#include<stdio.h>
void main()
{
    char str[10];
    fgets(str,sizeof(str),stdin);
    if(str[0]=='\0'||str[0]=='\n'||str[0]==' ')
    printf("Empty");
    else
    printf("Not Empty");
}