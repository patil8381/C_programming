#include<stdio.h>
int main()
{
char m;
FILE *f;
f=fopen("pqrst.dd","rb");
//f=fopen("abcd.dd","w");

printf("Position %lu\n",ftell(f));
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));

fclose(f);
return 0;
}