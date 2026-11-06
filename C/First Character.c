/*The Banner of the rising legion*/
#include<stdio.h>
void main()
{
    int n,i;
    char ch,str[20];
    fgets(str,sizeof(str),stdin);
    if(scanf("%d %c",&n,&ch)!=2)
    printf("Invalid Input");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='\n')
            printf("%c",str[0]);
        }
    }
}