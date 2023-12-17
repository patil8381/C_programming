#include<stdio.h>
union abc
{
int x;
char m;
};

int main()
{
union abc k;
k.x=1;
printf("size of union abc is %lu\n",sizeof(union abc));
printf("%d\n",k.x);
printf("%d\n",k.m);

return 0;
}
