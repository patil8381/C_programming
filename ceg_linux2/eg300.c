#include<stdio.h>

#define LIST(a,b,...)\
typeof(b) a[]={b,__VA_ARGS__};\
typeof(b)  a##_length=(sizeof(a)/sizeof(a[0]))

int main()
{
int i;
LIST(x,10,20,30,40,50,60,70,80);

printf("length of array is %d\n",x_length);
for(i=0;i<x_length;i++)
{
printf("%d\n",x[i]);
}

return 0;
}
