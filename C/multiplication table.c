/*Drum beats of the counting tribe*/
#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    if(n>0)
    {
      for(i=1;i<=10;i++)
     {
        printf("%d * %d = %d\n",n,i,n*i);
     }
    }
    else
    printf("0");
        
    }