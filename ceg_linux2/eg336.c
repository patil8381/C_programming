#include<stdio.h>
int main()
{
char m;
FILE *f;
f=fopen("xyz.pqr","r");
if(f==NULL)
{
printf("data file missing\n");
return 0;
}
printf("%lu\n",ftell(f));
m=fgetc(f);
printf("%c\n",m);
printf("%lu\n",ftell(f));
fseek(f,-2,SEEK_END);
m=fgetc(f);
printf("%c\n",m);
printf("%lu\n",ftell(f));
fseek(f,-5,SEEK_CUR);
printf("%lu\n",ftell(f));
m=fgetc(f);
printf("%c\n",m);
printf("%lu\n",ftell(f));
fclose(f);
return 0;
}
