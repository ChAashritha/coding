/*Code of Forbidden Words*/
#include<stdio.h>
void main()
{
    char str[20];
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[0]=='\n')
    printf("Invalid Input");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            continue;
            else
            printf("%c",str[i]);
        }
    }
}