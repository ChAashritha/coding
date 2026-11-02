/*the royal script of sun kingdom*/
#include<stdio.h>
void main()
{
    char str[20];
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[i]=='\n')
    printf("Invalid Input");
    else
    {
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        printf("%c",str[i]-32);
        else
        printf("%c",str[i]);
    }
    }
}