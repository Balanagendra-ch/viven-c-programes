#include <stdio.h>
void changevalue(int*ptr)
{
*ptr=30;
}
int main()
{
int val=20;
int*ptr=&val;
changevalue(ptr);
printf("%d",val);
}
//changevalue=changevale
