#include<stdio.h>
int main()
{
int y;
char m[]={"UJJAIN"};
printf("sizeof m in bytes is %d\n",sizeof(m));
printf("Number of elements in m are %d\n",sizeof(m)/sizeof(m[0]));
for(y=0;y<7;y++)
{
printf("at %d index, n0. is %d\n",y,m[y]);
}
return 0;
}