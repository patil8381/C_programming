#include<stdio.h>
int main()
{
int x;
int y[5];
int z[10][20];

char m;
char g[5];
char k[10][20];

printf("size of x is %lu and size of its address is %lu \n",sizeof(x),sizeof(&x));
printf("size of x is %lu and size of its address is %lu \n",sizeof(y),sizeof(&y));
printf("size of x is %lu and size of its address is %lu \n",sizeof(z),sizeof(&z));
printf("size of x is %lu and size of its address is %lu \n",sizeof(m),sizeof(&m));
printf("size of x is %lu and size of its address is %lu \n",sizeof(g),sizeof(&g));
printf("size of x is %lu and size of its address is %lu \n",sizeof(k),sizeof(&k));


return 0;
}