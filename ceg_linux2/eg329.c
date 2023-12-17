#include<stdio.h>
int main()
{
int x;
FILE *f;
x=0b000100000000100000000100000000010;
printf("value of x is %d\n",x);
f=fopen("data329.d","wb");
fwrite(&x,sizeof(x),1,f);

fclose(f);
printf("written %d to data329.d \n",x);

return 0;
}
