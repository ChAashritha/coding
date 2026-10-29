/*Echo's of the singing cavern*/
#include<stdio.h>
int main()
{
    char a[20];
    int count=0,i;
    fgets(a,sizeof(a),stdin);
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        count++;
    }
    if(count==0)
    printf("Invalid Input");
    else
    printf("%d",count);
}