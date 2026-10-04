#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,i,j,count=0;
    char str1[50],str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    if(strcmp(str1,str2)==0)
    printf("Equal");
    else
    printf("Not Equal");
    return 0;
}