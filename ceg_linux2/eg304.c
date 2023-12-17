#include<stdio.h>

int main()
{
enum DIRECTION{EAST=2,WEST=5,NORTH,SOUTH};
enum DIRECTION k;

k=SOUTH;

printf("%d\n",k);

return 0;
}
