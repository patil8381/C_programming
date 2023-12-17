#include<stdio.h>
void sam();
struct abc
{
int x,y;
char m;
};

struct abc i,j;		// 2 global structure

int main()
{

printf("%lu\n",(sizeof(struct abc)));
i.x=10;
i.y=20;
i.m='A';
printf("%d %d %c\n",i.x,i.y,i.m);
sam();
return 0;
}
void sam()
{
j.x=100;
j.y=200;
j.m='Z';
printf("%d %d %c \n",j.x,j.y,j.m);
}
