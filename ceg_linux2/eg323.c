#include<stdio.h>
union abc
{
int x;
char m[4];
};

int main()
{
union abc k;
k.x=0b00010000000010000000010000000010;
printf("size of union abc is %lu\n",sizeof(union abc));
printf("%d\n",k.x);
printf("%d\n",k.m[0]);
printf("%d\n",k.m[1]);
printf("%d\n",k.m[2]);
printf("%d\n",k.m[3]);
return 0;
}
