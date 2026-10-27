/*Mark of Self Returning Number*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,d,i,y,d2;
    scanf("%d",&n);
    if(n>=0)
    {
        y=n*n;
        for(;n>0;n=n/10)
       {
           if(n%10!=y%10)
           {
             printf("Not Automorphic");
             exit(0);
           }
           y=y/10;
       }   
      printf("Automorphic");
    }
    else
    printf("Invalid Input");
}