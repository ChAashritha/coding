/*Two scripts*/
#include<stdio.h>
void main()
{
    char ch;
    getchar();
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("Uppercase\n");
    else if(ch>=97 && ch<=122)
    printf("Lowercase");
    else
    printf("Invalid Input");
}