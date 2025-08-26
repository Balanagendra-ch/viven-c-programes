#include <stdio.h>
int main()
{
int n,choice,note;
scanf("%d",&n);
scanf("%d",&choice);
switch(choice)
{
case 100:note=n/100;
printf("%d 100 rs notes",note);
n=n%100;
case 50:note=n/50;
printf("%d 50 rs notes",note);
n=n%50;
case 20:note=n/20;
printf("%d 20 rs notes",note);
n=n%20;
case 10:note=n/10;
printf("%d 10 rs notes",note);
n=n%10;
case 5:note=n/5;
printf("%d 5 rs coins",note);
n=n%5;
case 2:note=n/2;
printf("%d 2 rs coins",note);
n=n%2;
case 1:note=n/1;
printf("%d 1 rs coins",note);
n=n%1;
}
}
