#include<stdio.h>

struct abc 
{
int x,y;
char m;
};	

typedef struct abc ABCDEF,PQRST;	//ABCDEF and PQRST both are alias of sttuct abc

int main()
{
//struct abc g;
ABCDEF g;	// same as above line
PQRST t;
g.x=10;
g.y=20;
g.m='A';
printf("%d %d %c \n",g.x,g.y,g.m);
t.x=1000;
t.y=2000;
t.m='Z';
printf("%d %d %c \n",t.x,t.y,t.m);

return 0;
}
