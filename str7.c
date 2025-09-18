#include <stdio.h>
int main()
{
char str[200];
int i,alphabets =0,digits=0,special=0;
printf("enter a string:");
fgets(str,sizeof(str),stdin);
for (i=0;str[i]!='\0';i++)
{
if((str[i]>='a' && str[i]<='z'))
{
alphabets++;
}
else if (str[i]>='0' && str[i]<= '9')
{
digits++;
}
else if (str[i]!='\n' && str[i]!=' ')
{
special++;
}
}
printf("total alphabets:%d\n",alphabets);
printf("total digits:%d\n",digits);
printf("total special:%d\n",special);
return 0;
}

