#include <stdio.h>
int main()
{
int a,b;
printf("enter two integers:");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("maximum = %d\n",a);
printf("minimum = %d\n",b);
}
else if (b>a)
{
printf("maximum = %d\n",b);
printf("minimum = %d\n",a);
}
else{
printf("both numbers are equal:%d\n",a);
}
}
