#include<stdio.h>
#include<string.h> 	// prototype for memcpy
#include<stdlib.h>	// prototype for malloc

#define swap(e,f) swap_it(&e,&f,sizeof(e))

int swap_it(void *e,void *f,long unsigned int sz)
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
result = swap(x,y);
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
