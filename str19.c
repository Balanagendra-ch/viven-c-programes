#include <stdio.h>
int main()
{
char str1[200],str2[200];
int i=0,j=0;
printf("enter first string:");
fgets(str1,sizeof(str1),stdin);
printf("enter second string:");
fgets(str2,sizeof(str2),stdin);
while(str1[i]!='\0' && str1[i]!='\n')
{
i++;
}
while(str2[j]!='\0' && str2[j]!='\n')
{
str1[i++]=str2[j++];
}
str1[i]='\0';
printf("combined string :%s\n",str1);
return 0;
}
