#include<stdlib.h>
#include<string.h>

int swap_it(void *e,void *f,long unsigned int sz)
{
int *g;
if(sz<=0) return -1;
else if(e==NULL || f==NULL) return -1;
g=malloc(sz);
if(g==NULL) return -1;
memcpy(g,e,sz);
memcpy(e,f,sz);
memcpy(f,g,sz);

free(g);
return 0;
}
