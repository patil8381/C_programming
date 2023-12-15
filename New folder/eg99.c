// Pointer can be used as an attay 
// but Pointer must point to base address and don't change

#include<stdio.h>
int main()
{
int x[5];
int *p;
int y;
p=x;	// will change to p=&x[0]
p[0]=10;
p++;
p[0]=20;
p[1]=30;
p[2]=40;
p[3]=50;
for(y=0;y<5;y++)
{
printf("%d\n",x[y]);
}

return 0;
}