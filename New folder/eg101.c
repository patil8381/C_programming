#include<stdio.h>
int main()
{
int x[3]={10,20,30};
int y;
printf("Number of elements in array is %d\n",sizeof(x)/sizeof(x[0]));
for(y=0;y<3;y++)
{
printf("%d\n",x[y]);
}
return 0;
}