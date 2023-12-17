#include<stdio.h>

typedef struct abc 
{
int x,y;
char m;
}ABCDEF,PQRST;	//ABCDEF and PQRST is not a structure now 
		//ABCDEF and PQRST both are alias of struct abc

int main()
{
ABCDEF g;
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
