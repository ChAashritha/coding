/*Chaotic Discount scroll*/
#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);
    if(x<=0)
    printf("Invalid Input");
    else
    {
        if(x<500)
        printf("no discount");
        else if(x>499 && x<1000)
        printf("%d",x-((x*10)/100));
        else if(x>999 && x<2000)
        printf("%d",x-((x*20)/100));
        else
        printf("%d",x-((x*30)/100));
    }
}