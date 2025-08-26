#include <stdio.h>
int main()
{
int i=0;
char ch='A';
do{
printf("%C",ch);
printf("%d\n",i);
}while((i++<5)||(++ch<='F'));
}
