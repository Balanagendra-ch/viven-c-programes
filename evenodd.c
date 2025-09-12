#include <stdio.h>
int main()
{
int a[10],i;
int even=0,odd=0;
printf("enter array elements:");
for(i=0;i<=10;i++);
{
scanf("%d",&a[i]);
if (a[i]%2==0)
even=even++;
else 
odd=odd++;
}
printf(" total even elements are=%d",even);
printf("total odd elements are=%d",odd);

return 0;
}
