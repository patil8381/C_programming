#include<stdio.h>
int main()
{
char m;
FILE *f;
f=fopen("xyz.pqr","a+");
printf("%lu\n",ftell(f));
fputs("GREAT",f);
rewind(f);
m=fgetc(f);
printf("%c\n",m);
printf("%lu\n",ftell(f));
fputs("COOL",f);
printf("%lu\n",ftell(f));
fseek(f,-2,SEEK_CUR);
fputs("STUFF",f);

fclose(f);
return 0;
}
