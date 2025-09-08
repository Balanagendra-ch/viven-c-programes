#include <stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int *ptr = arr;
int i;
printf ("array elements using pointer arithemetic:\n");
for (i =0;i  <5; i++)
{
printf("value at ptr +%d=%d\n",i,*(ptr+1));
}
printf("\ndemonstrating pointer increment:\n");
ptr = arr;
printf("initial pointer address:%p,value: %d\n",ptr,*ptr);
ptr++;
printf("after ptr++: address:%p,value: %d\n",ptr,*ptr);
ptr += 2;
printf("after ptr+=2 : address:%p,value: %d\n",ptr,*ptr);
ptr--;
printf("after ptr--: address:%p,value: %d\n",ptr,*ptr);
return 0;
}
