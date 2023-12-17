#include<stdio.h>
int main()
{
int x[5]={10,20,30,40,23};
FILE *f;
f=fopen("data332.d","wb");

fwrite(&x,sizeof(x[0]),5,f);

fclose(f);
printf("written data to file data332.c\n");

return 0;
}
