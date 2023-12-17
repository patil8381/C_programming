#include<stdio.h>

int get_smallest(int a,int b,int c)
{
int i=(a<b)?a:b;
return (i<c)?i:c;
}

int main()
{
int x,y,z,smallest;
x=100;
y=20;
z=300;
smallest=get_smallest(x,y,z);
printf("smalleset in %d %d and %d is %d\n",x,y,z,smallest);

return 0;
}
