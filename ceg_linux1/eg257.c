//print factorail using recursive function

#include<stdio.h>
int sam(int p)
{
int n;
if(p==1)  return 1;

n=sam(p-1)*p;
return n;
}

int main()
{
int x,y;
x=5;
y=sam(x);
printf("%d\n",y);
return 0;
}
