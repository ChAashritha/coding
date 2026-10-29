/*The Chant of sacred letters*/
#include<stdio.h>
void main()
{
    int i;
    char a[20];
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c\n",a[i]);
    }
    
}