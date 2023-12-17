#include<stdio.h>

#define SLOGAN(e) #e

int main()
{
//char a[]="God is Great";
char a[]=SLOGAN(God is great);
printf("%s\n",a);

return 0;
}
