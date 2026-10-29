/*Fortress of the silent letters*/
#include<stdio.h>
void main()
{
    char a[20];
    int count=0,i;
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='O')
        continue;
        else
        count++;
        }
    }
    if(count==0)
    printf("Invalid Input");
    else
    printf("%d",count);
}