#include<stdio.h>
int main()
{
int x[10]={0};
int y;
printf("number of elements : %d\n",sizeof(x)/sizeof(x[0]));
for(y=0;y<10;y++)
{
printf("%d\n",x[y]);
}
return 0;
}