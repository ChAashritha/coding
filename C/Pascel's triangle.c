/*The Shattered Stele of the Pythagorean Brotherhood*/
#include<stdio.h>
void main()
{
    int n,i,j,val;
    if(scanf("%d",&n)!=2)
    printf("Invalid Input");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        printf(" ");
        val=1;
        for(j=0;j<=i;j++)
        {
            printf("%d",val);
            if(j<i)
            printf(" ");
            val=val*(i-j)/(j+1);
        }
        printf("\n");
    }
}