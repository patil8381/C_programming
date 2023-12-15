#include<stdio.h>
int main()
{
char m;
FILE *f;
f=fopen("eg324.dd","r");
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
m=fgetc(f);
printf("ASCII code %d\n",m);

printf("Position %lu\n",ftell(f));

fclose(f);
return 0;
}