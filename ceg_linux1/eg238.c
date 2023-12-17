#include<stdio.h>
int main()
{
struct abc 
{
int x,y;
char m;
};
struct abc g;
struct abc *p;
p=&g;
g.x=10;
p->y=20;
p->m='A';
printf("%d %d %c\n",g.x,p->y,p->m);

return 0;
}
