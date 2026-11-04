/*The Scroll of hidden Vowels in Desert*/
#include<stdio.h>
void main()
{
    char str[20],ch;
    int i;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&ch);
    if(str[0]=='\n'||str[0]=='\0')
    printf("Invalid Input");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            printf("%c",ch);
            else
            printf("%c",str[i]);
        }
        
    }
}