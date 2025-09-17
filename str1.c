#include <stdio.h>
int main()
{
char str1[100],str2[100];
printf("enter the first string:");
fgets(str1,sizeof(str1),stdin);
printf("enter the second string:");
fgets(str2,sizeof(str2),stdin);
printf("you entered:%s %s",str1,str2);
return 0;
}
