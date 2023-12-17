#include<stdio.h>
int main()
{
FILE *f;
f=fopen("abcd.dd","w");
printf("Before writing first byte %lu\n",ftell(f));
fputc('g',f);
fputc('o',f);
fputc('o',f);
fputc('d',f);
fputc('\n',f);
printf("after wrintg last byte %lu\n",ftell(f));

return 0;
}


