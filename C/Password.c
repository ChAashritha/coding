/*Password conditions*/
#include<stdio.h>
void main()
{
    char pass[10];
    int i,count=0;
    getchar();
    fgets(pass,sizeof(pass),stdin);
    for(i=0;pass[i]!='\0';i++)
    {
        count++;
    }
    if(count>=8)
    printf("Secure");
    else
    printf("Too Short");
}