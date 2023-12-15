#include<stdio.h>
int main()
{
int x[5];
int *p;
int y;
p=x;
p[0]=10;
p[1]=20;
p[2]=30;
p[3]=40;
p[4]=50;

for(y=0;y<5;y++)
{
printf("%d\n",x[y]);
}
return 0;
}