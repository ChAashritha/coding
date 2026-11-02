/*the crown and the cloak of royal letters*/
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
        if(str[i]>='A'&&str[i]<='Z')
        printf("%c",str[i]+32);
        else if(str[i]>='a'&&str[i]<='z')
        printf("%c",str[i]-32);
        else
        printf("%c",str[i]);
    }
    }
}