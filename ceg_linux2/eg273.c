#include<stdio.h>

typedef struct abc 
{
int x,y;
char m;
}ABCDEF;	//ABCDEF is not a structure now 
		//ABCDEF is an alias of struct abc

int main()
{
ABCDEF g;
g.x=10;
g.y=20;
g.m='A';
printf("%d %d %c \n",g.x,g.y,g.m);

return 0;
}
