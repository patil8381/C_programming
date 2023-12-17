#include<stdio.h>
int add(int ,int);
int square(int);
int main()
{
int sum,sq;
int (*p1)();
int (*p2)();
p1=add;
p2=square;
sum=p1(10,20);
sq=p2(5);
printf("sum is (%d)\n",sum);
printf("square is (%d)\n",sq);

return 0;
}
int add(int p,int q)
{
return p+q;
}
int square(int p)
{
return p*p;
}
