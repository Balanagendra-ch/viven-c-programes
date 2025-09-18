#include <stdio.h>
int main()
{
char str[100];
int i;
printf("enter a string:");
gets(str);
printf("the characters in the string are:\n");
for (i=0;str[i]!='\0';i++)
{
printf("%c\n",str[i]);
}
return 0;
}
