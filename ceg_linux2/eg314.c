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
char a[51]="Ujjain is the city of gods";
char b[51]="God is great";
char c[51];
int result ;

printf("Before swapping \n");
printf("String in a : %s\n",a);
printf("String in b : %s\n",b);
result = swap(a,b);
if(result==-1)
{
printf("swap function did not perform\n");
strcpy(c,a);
strcpy(a,b);
strcpy(b,c);
}
printf("After  swapping \n");
printf("String in a : %s\n",a);
printf("String in b : %s\n",b);

return 0;
}
