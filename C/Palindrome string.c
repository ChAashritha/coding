/*The Gate of the Reflecting Words*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,j,count=0,x;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    x=strlen(str);
    if(str[0]=='\n'||str[0]=='\0')
    printf("Invalid Input");
    else
    {
    for(i=0,j=x-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        { 
          printf("gate remains closed");
          return 0;
        }
    }
    printf("gate opens");
    }
    
    
}