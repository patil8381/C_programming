#include<stdio.h>
#include<stdlib.h>
int main(int count , char *v[])
{
int total , y;
if (count <3)
{
printf("insufficient argument\n");
printf("Usage eg207.c num1 num2 .....\n");
return 0;
}
total = 0;
y=1;
while(y<count)
{total = total +atoi(v[y]);
y++;
}
printf("total is %d\n",total);
return 0;
}
