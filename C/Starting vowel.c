/*Sacred sounds*/
#include<stdio.h>
void main()
{
    char str[10];
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'||str[0]=='A'||str[0]=='E'||str[0]=='I'||str[0]=='O'||str[0]=='U')
    printf("Yes");
    else
    printf("No");    
}