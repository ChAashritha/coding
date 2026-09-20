/*Determining the place value of a given digit based on its position in a number (e.g., in 5432, the place value of 4 is 400).*/
#include<stdio.h>
void main()
{
    int n,i,count=0,cp,x=0,s,j;
    scanf("%d",&n);
    scanf("%d",&s);
    for(;n>0;n=n/10)
    {
        i=n%10;
        count++;
        if(i==s)
        cp=count;
        
    }
    x=count-cp;
    printf("%d",s);
    for(j=1;j<=cp-1;j++)
    printf("0");
}
