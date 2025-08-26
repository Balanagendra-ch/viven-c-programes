#include <stdio.h>
int main()
{
char var=0x04;
var=var | 0x04;
printf("%d,",var);
var |=0x01;
printf("%d,",var);
return 0;
}
