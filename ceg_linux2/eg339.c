#include<stdio.h>
int main()
{
char m,j;
FILE *f;
f=fopen("xyz.pqr","r+");
if(f==NULL)
{
printf("xyz.pqr is missing \n");
return 0;
}
m=fgetc(f);
j=fgetc(f);
printf("%c\n",m);
rewind(f);
fputs("AB",f);
fseek(f,0,SEEK_END);
printf("%lu\n",ftell(f));
fputs("Thinking Mchines\n",f);
printf("%lu\n",ftell(f));

return 0;
}
