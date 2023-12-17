#include<stdio.h>
struct abc 
{
int x;
char m;
int y;
char u;
};

int main()
{
struct abc g;

printf("size of struct abc is %lu\n",sizeof(struct abc ));
printf("size of g is %lu\n",sizeof(g));
printf("allignment factor of struct abc is %lu\n",_Alignof(struct abc));
printf("Address of structure g is %lu\n",&g);
printf("Address of structure g.x is %lu\n",&g.x);
printf("Address of structure g.m is %lu\n",&g.m);
printf("Address of structure g.y is %lu\n",&g.y);
printf("Address of structure g.u is %lu\n",&g.u);
printf("--------------------------------------\n");
printf("%lu\n",((unsigned long)&g)%_Alignof(g));
printf("%lu\n",((unsigned long)&g.x)%_Alignof(g.x));
printf("%lu\n",((unsigned long)&g.m)%_Alignof(g.m));
printf("%lu\n",((unsigned long)&g.y)%_Alignof(g.y));
printf("%lu\n",((unsigned long)&g.u)%_Alignof(g.u));

return 0;	
}
