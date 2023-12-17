#include<stdio.h>

void sam();

struct abc
{
int x,y;
char m;
};

int main()
{
struct pqr
{
int r;
char u;
};

struct abc g;
struct pqr p;
p.r=1000;
p.u='B';
printf("p: %d %c\n",p.r,p.u);

g.x=10;
g.y=20;
g.m='A';
printf("g: %d %d %c\n",g.x,g.y,g.m);
sam();

return 0;
}

void sam()
{
struct abc k;
struct pqr pp;
k.x=100;
k.y=200;
k.m='Z';
printf("k: %d %d %c \n",k.x,k.y,k.m);
}

