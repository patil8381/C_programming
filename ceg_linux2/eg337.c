#include<stdio.h>
int main()
{
FILE *f;
f=fopen("xyz.pqr","a");
printf("%lu\n",ftell(f));
fputs("HELLO",f);
printf("%lu\n",ftell(f));
rewind(f);
printf("%lu\n",ftell(f));
fputs("GOD",f);
printf("%lu\n",ftell(f));
fclose(f);
return 0;
}
