#include<stdio.h>
int x[4];	// Global variable

int main()
{
int y;
for(y=0;y<4;y++)
{
printf("%d\n",x[y]);
}
return 0;
}