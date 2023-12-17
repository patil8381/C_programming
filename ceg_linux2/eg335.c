#include<stdio.h>
int main()
{
FILE *f;
f=fopen("xyz.pqr","wb");
printf("%lu\n",ftell(f));
fputs("ABCDEFGHIJKLMNPQRSTUVWXYZ",f);
printf("%lu\n",ftell(f));
fseek(f,0,SEEK_SET);
fputs("012",f);
printf("%lu\n",ftell(f));
fseek(f,3,SEEK_CUR);
printf("%lu\n",ftell(f));
fputs("45",f);
fseek(f,0,SEEK_END);
printf("%lu\n",ftell(f));
fputs("789",f);
printf("%lu\n",ftell(f));
return 0;
}
