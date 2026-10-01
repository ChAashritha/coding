/*The gate of symbols*/
#include<stdio.h>
void main()
{
    char ch;
    getchar();
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    printf("Digit");
    else if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z'))
    printf("Alphabet");
    else
    printf("Invalid Input");
}