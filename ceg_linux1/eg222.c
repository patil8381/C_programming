#include<stdio.h>
int main()
{
int x,y;
int * const p=&x;
x=10;
y=20;
*p=100;
p=&y;
*p=200;

return 0;
}

