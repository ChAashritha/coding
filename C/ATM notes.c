/*Given a total withdrawal amount:
Determine Dispensability:
The ATM only contains ?500 notes and ?100 notes.
It must always dispense using the largest notes possible first (greedy approach using ?500 notes, followed by ?100 notes).
If Possible:
Print the number of ?500 notes.
Print the number of ?100 notes.
If Not Possible:
Print Invalid Amount*/
#include<stdio.h>
void main()
{
    int amt,x;
    scanf("%d",&amt);
    x=amt%500;
    if(amt%100==0)
    {
    if(amt>500)
    printf("%d ",amt/500);
    if(x<100 && amt>0)
    printf("0");
    else if(x%100!=0)
     printf("Invalid Input");
    else if(x>0 && x/100>0)
    printf("%d",x/100);
    else if(amt>0 && amt<500)
     printf("%d",amt/100);
     else
    printf("Invalid Input");
    }
    else
    printf("Invalid Input");
}