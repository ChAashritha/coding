/*Mirror gate of forgotten kingdom*/
#include<stdio.h>
void main()
{
    int n,rev=0,d,i,cn;
    scanf("%d",&n);
    if(n>0)
    {
        cn=n;
      for(;n>0;n=n/10)
      {
          d=n%10;
          rev=(rev*10)+d;
      }
      if (rev==cn)
      printf("gate opens");
      else
      printf("gate remains sealed");
    }
    else
    printf("Invalid Input");
}