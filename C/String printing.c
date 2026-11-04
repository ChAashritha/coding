/*The Rope of Unbroken Words*/
#include<stdio.h>
void main()
{
    char str[20];
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[0]=='\n'||str[0]=='\n')
    printf("Invalid Input");
    else
    {
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        continue;
        else
        printf("%c",str[i]);
    }
    }
}