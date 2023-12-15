#include<stdio.h>
int main()
{
FILE *f;
f=fopen("xyq.pqr","a+");
if(f==NULL)
{
printf("file not exists\n");
}
printf("%lu\n",ftell(f));
printf("file exists\n");

return 0;
}