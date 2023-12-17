#include<stdio.h>

struct abc 
{
int x,y;
char m;
}g;	//g is a global structure

int main()
{
g.x=10;
g.y=20;
g.m='A';
printf("%d %d %c \n",g.x,g.y,g.m);

return 0;
}
