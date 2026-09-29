#include<stdio.h>
void main()
{
    char ch;
    getchar();
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("%c",ch-32);
    else
    printf("Invalid Input");
}