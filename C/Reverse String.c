/*The Mantra of Reverse Chant*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int x,i;
    fgets(str,sizeof(str),stdin);
    if(str[0]=='\n')
    {
    printf("Invalid Input");
    return 0;
    }
    x=strlen(str);
    for(i=x;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}