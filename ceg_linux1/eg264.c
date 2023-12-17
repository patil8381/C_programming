#include<stdio.h>
struct abc
{
int x,y;
char m;
}g,t;

int main()
{
g.x=10;
g.y=20;
g.m='A';
t.x=1000;
t.y=2000;
t.m='Z';
printf("%d %d %c \n%d %d %c\n",g.x,g.y,g.m,t.x,t.y,t.m);

return 0;
}

