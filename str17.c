#include <stdio.h>
int main ()
{
char str[200],result[200];
int i,j=0;
printf("enter a string:");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
{
result[j++]=str[i];
}
}
result[j]='\0';
printf("string with only alphabets:%s\n",result);
return 0;
}
