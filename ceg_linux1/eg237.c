#include<stdio.h>
struct pqr
{
int a,b;
};
struct abc
{
int x,y;
char m;
struct pqr g,t;		// CREATING STRUCTURES WITHIN STRUCTURES
};
int main()
{
struct abc hh;
hh.x=10;
hh.y=20;
hh.m='A';
hh.g.a=100;
hh.g.b=200;
hh.t.b=1000;
hh.t.a=2000;
printf("%d %d %c\n %d %d\n %d %d\n",hh.x,hh.y,hh.m,hh.g.a,hh.g.b,hh.t.a,hh.t.b);
return 0;
}
