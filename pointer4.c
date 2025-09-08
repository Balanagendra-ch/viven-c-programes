#include <stdio.h>
int main()
{
int a=42;
int *p;
p = &a;
printf("address of 'a'(using &a):%p\n",(void*)&a);
printf("address stored in pointer 'p' :%p\n",(void*)p);
printf("value of 'a'(using a):%d\n",a);
printf("value of 'a'(using *p):%d\n",*p);
*p=100;
printf("new value of 'a' (after *p=100):%d\n",a);
printf("value of 'a' (using *p):%d\n",*p);
return 0;
}
