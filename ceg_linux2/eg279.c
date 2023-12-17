#include<stdio.h>

#define greater_of(e,f) (e>f)?e:f

int main()
{
int x,y;
x=100;
y=200;
printf("%d\n",greater_of(x,y));
return 0;
}
