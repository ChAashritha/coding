/*Metro fare confusion*/
#include<stdio.h>
void main()
{
    int age;
    scanf("%d",&age);
    if(age>0)
    {
    if(age<5)
    printf("free\n");
    else if(age>4 && age <=17)
    printf("10");
    else if(age>17 && age <60)
    printf("20");
    else
    printf("15");
    }
    else
    printf("Invalid Age");
}