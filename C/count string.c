/*Data Stream of Target Symbol*/
#include<stdio.h>
void main()
{
    char str[20],ch;
    int i,count=0;
    fgets(str,sizeof(str),stdin);
    getchar();
    scanf("%c",&ch);
    if(str[0]=='\0'||str[0]=='\n')
    printf("Invalid Input");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
          if(str[i]==ch)
          count++;
        }
        printf("%d",count);
    }
}