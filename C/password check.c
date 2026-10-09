/*The Vault of Four seals*/
#include<stdio.h>
void main()
{
    char str[10];
    int i,count=0,count2=0,count3=0,count4=0;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
        if(str[i]>='A'&&str[i]<='Z')
        count2++;
        else if(str[i]>='0'&&str[i]<='9')
        count3++;
        else if(!(str[i]>='a'&&str[i]<='z'))
        count4++;
    }
    if(count>=8&&count2>=1&&count3>=1&&count4>=1)
    printf("Strong");
    else
    printf("Weak");
}