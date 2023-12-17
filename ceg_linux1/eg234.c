#include<stdio.h>
void sam();

int main()
{

struct abc
{
int x,y;
char m;
};

struct abc rr;
printf("%lu\n",(sizeof(struct abc)));
rr.x=10;
rr.y=20;
rr.m='A';
printf("%d %d %c\n",rr.x,rr.y,rr.m);
sam();
return 0;
}
void sam()
{
struct abc r;
r.x=100;
r.y=200;
r.m='Z';
printf("%d %d %c \n",r.x,r.y,r.m);
}
