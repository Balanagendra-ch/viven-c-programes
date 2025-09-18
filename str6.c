#include <stdio.h>
int  main()
{
char str1[100],str2[100];
printf("enter the first string:\n");
scanf("%s",str1);
printf("enter the second string:\n");
scanf("%s",str2);
if (strcomp (str1,str2))
{
printf("the strings are equal.\n");
}
else {
printf("strings are not equal.\n");
}
return 0;
}
