#include<stdio.h>
int main()
{
int x;
FILE *f;
x=12568452;
printf("value of x is %d\n",x);
f=fopen("data330.d","wb");
fwrite(&x,sizeof(x),1,f);

fclose(f);
printf("written %d to data330.d \n",x);
printf("%c\n",0b10000100);
printf("%c\n",0b11000111);
printf("%c\n",0b10111111);
printf("%c\n",0b00000100);
return 0;
}
