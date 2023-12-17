#include<stdio.h>
#include<string.h> 	// prototype for memcpy
#include<stdlib.h>	// prototype for malloc

int swap_it(void *e,void *f,int sz)
{
void *g;
g=malloc(sz);
if(g==NULL) return -1;
memcpy(g,e,sz);
memcpy(e,f,sz);
memcpy(f,g,sz);
free(g);
return 0;
}

int main()
{
int x,y,result,z;
x=100;
y=200;
printf("Before swapping x: %d, y: %d\n",x,y);
result = swap_it(&x,&y,sizeof(x));
if(result==-1)
{
printf("swappng did not perform\n");
z=x;
x=y;
y=z;
}
printf("After  swapping x: %d, y: %d\n",x,y);

return 0;
}
