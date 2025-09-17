#include <stdio.h>
int main()
{
char str[100];
int i,length=0;
printf("enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
length++;
}
printf("length of the string =%d\n",length);
return  0;
}
