#include <stdio.h>
int main()
{
int a=10;
float b=5.5;
char c='x';
int *p1;
float *p2;
char *p3;
printf("size of pointer to int: %zu bytes\n",sizeof(p1));
printf("size of pointer to float: %zu bytes\n",sizeof(p2));
printf("size of pointer to char: %zu bytes\n",sizeof(p3));
return 0;
}
