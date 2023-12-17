#include<stdio.h>
int main()
{
char m;
FILE *f;
f=fopen("xyz.pqr","w+");
if(f==NULL)
{
printf("xyz.pqr is missing \n");
return 0;
}
printf("%lu\n",ftell(f));
fputs("0123456789",f);
printf("%lu\n",ftell(f));
fseek(f,-3,SEEK_CUR);
m=fgetc(f);
printf("%c\n",m);
printf("%lu\n",ftell(f));
fputs("A",f);
printf("%lu\n",ftell(f));
fseek(f,0,SEEK_END);
fputs("ABCD",f);
printf("%lu\n",ftell(f));
return 0;
}
