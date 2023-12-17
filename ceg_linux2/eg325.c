#include<stdio.h>
int main()
{
FILE *f;
char m;
f=fopen("abcd.dd","r");
m=fgetc(f);
printf("%c\n",m);
m=fgetc(f);
printf("%c\n",m);
m=fgetc(f);
printf("%c\n",m);
m=fgetc(f);
printf("%c\n",m);
return 0;
}


