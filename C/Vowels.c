/*Sacred sounds*/
#include<stdio.h>
void main()
{
    char ch;
    getchar();
    scanf("%c",&ch);
    if(ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U'||ch =='a'||ch =='e'||ch =='o'||ch =='i'||ch =='u')
    printf("Vowel");
    else
    printf("Consonant");
}