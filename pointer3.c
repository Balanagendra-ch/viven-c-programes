#include <stdio.h>
int main()
{
int a=10;
float b=5.5f;
char c='x';
int *p1=&a;
float *p2=&b;
char *p3=&c;
printf("size of int pointer (p1): %zu bytes\n",sizeof(p1));
printf("size of float pointer (p2): %zu bytes\n",sizeof(p2));
printf("size of char pointer (p3): %zu bytes\n",sizeof(p3));
printf("size of value pointed by p1 (*p1): %zu bytes\n",sizeof(p1));
printf("size of value pointed by p2 (*p2): %zu bytes\n",sizeof(p2));
printf("size of value pointed by p3 (*p3): %zu bytes\n",sizeof(p3));
return 0;
}
