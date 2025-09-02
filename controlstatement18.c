#include <stdio.h>
int main()
{
int num,i=2, isprime=1;
printf("enter a number:");
scanf("%d",&num);
if (num<=1)
{
isprime=0;
}
else{
while(i<=num/2)
{
if (num % i ==0)
{
isprime=0;
break;
}
i++;
}
}
if (isprime)
printf("%d is a prime number.\n",num);
else
printf("%d is not a prime number.\n",num);
return 0;
}

