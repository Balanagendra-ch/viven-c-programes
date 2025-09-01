#include <stdio.h>
int main()
{
int week;
printf("enter week number (1-7):");
scanf("%d",&week);
switch (week)
{
case 1:printf("Monday\n");break;
case 2:printf("Tuesday\n");break;
case 3:printf("Wednesday\n");break;
case 4:printf("Thursday\n");break;
case 5:printf("Friday\n");break;
case 6:printf("Saturday\n");break;
case 7:printf("Sunday\n");break;
default:printf("invalid week number!please enter between 1-7\n");
}
}

