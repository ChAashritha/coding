/*Door of forbidden symbols*/
#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if(isalnum(ch))
    printf("Not Special");
    else
    printf("Special Symbol");
}