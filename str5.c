#include <stdio.h>
int main ()
{
char str[100];
int i,words=0;
printf("enter a string:");
fgets(str,sizeof(str),stdin);
for (i=0;str[i]!='\0';i++)
{
if ((str[i]!=' ' && str[i]!='\n' && str[i]!='\t') && (i==0 || str[i=1]==' ' || str[i-1]=='\n' || str[i-1]=='\t'))
{
words++;
}
}
printf("total number of words:%d\n",words);
return 0;
}
