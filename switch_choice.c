#include <stdio.h>
int main(){
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1:printf("first");
break;
case 2:printf("second");
break;
case 3:printf("third");
break;
default:printf("invalid input");
}
}
