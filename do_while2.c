//count no.of digits in a value
#include <stdio.h>
int main()
{
int n=3961;
int count=0;
do{
count++;
n=n/10;
}while(n>0);
}
