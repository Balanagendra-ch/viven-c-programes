#include <stdio.h>
#include <ctype.h>
int main()
{
char str[200];
int vowels=0,consonents=0;
int i;
printf("enter a string:");
fgets(str,sizeof(str),stdin);
for (i=0;str[i]!='\0';i++)
{
char ch = tolower(str[i]);
if(isalpha(ch))
{
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
vowels++;
else
consonents++;
}
}
printf("total number of vowels :%d\n",vowels);
printf("total number of consonents :%d\n",consonents);
return 0;
}
