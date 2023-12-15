#include<stdio.h>

int main()
{
FILE *f;

//f=fopen("abcd.dd","w");
f=fopen("pqrst.dd","wb");
printf("Before writing is %lu\n",ftell(f));
fputc('g',f);
fputc('o',f);
fputc('o',f);
fputc('d',f);
fputc('\n',f);
printf("After writing last byte %lu",ftell(f));

fclose(f);
return 0;
}