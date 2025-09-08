#include <stdio.h>
int main ()
{
int a=10;
float b=5.5;
char c='x';
printf ("address of integer variable 'a':%p\n",(void*)&a);
printf ("address of integer variable 'b':%p\n",(void*)&a);
printf ("address of integer variable 'c':%p\n",(void*)&a);
return 0;
}
