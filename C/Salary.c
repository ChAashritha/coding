/*Salary distribution*/
#include<stdio.h>
void main()
{
    int sal,expe;
    scanf("%d",&sal);
    scanf("%d",&expe);
    if(expe < 0)
    printf("Invalid Input");
    else if(sal<0)
    printf("Invalid Input");
    else if(expe<2)
    printf("no bonus");
    else if(expe>1 && expe<5)
    printf("%d",(sal/100)*10);
    else if(expe>4 && expe<10)
    printf("%d",(sal/100)*20);
    else
    printf("%d",(sal/100)*30);
    
}