#include<stdio.h>
#include<stddef.h>
struct abc 
{
int x;
char m;
int y;
char u;
};

int main()
{
printf("Offset of x in struct abc is %lu bytes from start\n",offsetof(struct abc,x));
printf("Offset of x in struct abc is %lu bytes from start\n",offsetof(struct abc,m));
printf("Offset of x in struct abc is %lu bytes from start\n",offsetof(struct abc,y));
printf("Offset of x in struct abc is %lu bytes from start\n",offsetof(struct abc,u));

return 0;
}
