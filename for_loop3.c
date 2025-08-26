//sum of digits of a number
#include <stdio.h>
int main()
{
int n,sum=0,rem;
scanf("%d",&n);
for( ;n>0;n=n/10)
{
rem=n%10;
sum=sum+rem;
}
}
