#include<stdio.h>
int main()
{
int x[5][3];
int *j;
int y, total;

x[0][0]=1;
x[0][1]=2;
x[0][2]=10;
x[1][0]=100;
x[1][1]=200;
x[1][2]=300;
x[2][0]=400;
x[2][1]=500;
x[2][2]=1000;
x[3][0]=2000;
x[3][1]=3000;
x[3][2]=4000;
x[4][0]=5000;
x[4][1]=6000;
x[4][2]=7000;

j=(int *)x;
total = 0;
for(y=0;y<=14;y++)
{
total=total+ *(j+y);
printf("Added %d\n",*(j+y));
}
printf("Total is %d\n",total);
return 0;
}