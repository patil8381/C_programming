#include<stdio.h>
int main()
{
int r;
FILE *f;
f=fopen("data330.d","rb");
if(f==NULL)
{
printf("data330.d does not exist \n");
return 0;
}

fread(&r,sizeof(r),1,f);
if(feof(f)) 
{
printf("data330.d does not contain desired data");
fclose(f);
return 0;
}

fclose(f);
printf("value read from file is %d\n",r);
return 0;
}
