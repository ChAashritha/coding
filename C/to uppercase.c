/*to lowercase*/
#include<stdio.h>
void main()
{
    char ch;
    getchar();
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    printf("%c",ch+32);
    else
    printf("Invalid Input");
}