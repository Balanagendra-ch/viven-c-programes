#include <stdio.h>
int main()
{
int n,first =0,second=1,next,i;
printf("enter the number:");
scanf("%d",&n);
printf("Fibonacci series up to %d terms:\n",n);
for (i=1; i<=n; i++)
{
printf("%d",first);
next=first+second;
first=second;
second=next;
}
printf("\n");
return 0;
}

