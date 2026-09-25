/*Lost day in royal calender*/
#include<stdio.h>
void main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0)
    {   
        if(year%100==0)
        {
            if(year%400==0)
            printf("Leap Year\n");
            else
            printf("Common Year\n");
        }
        else
        printf("Leap Year\n");
        
    }
    else
    printf("Common Year\n");
        
}