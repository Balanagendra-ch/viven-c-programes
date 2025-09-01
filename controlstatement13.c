#include <stdio.h>
int main()
{
int year,month;
printf("enter month number (1-12):");
scanf("%d",&month);
printf("enter a year:");
scanf("%d",&year);
switch (month){
case 1:case 3:case 5:case 7:case 8:case 10:case 12:
printf("month %d of year %d has 30 days.\n",month,year);
break;
case 4:case 6:case 9:case 11:
printf("month %d of year %d has 31 days.\n",month,year);
break;
case 2:
if((year %400==0) || ((year %4==0) && (year % 100!=0)))
{
printf("February %d has 29 days (leap year).\n",year);
}
else{
printf("February %d has 28 days.\n",year);
}
break;
default:printf("invalid month number! please enter between 1 and 12.\n");
}
}

