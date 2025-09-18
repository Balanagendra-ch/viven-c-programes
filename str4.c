#include <stdio.h>
int main ()
{
char str[100];
int i,length=0;
printf("enter a string:");
gets(str);
for (i=0;str[i]!='\0';i++)
{
length++;
}
printf("the character of the string in reverse order are:\n");
for (i=length-1;i>=0;i--)
{
printf("%c\n",str[i]);
}
return 0;
}

