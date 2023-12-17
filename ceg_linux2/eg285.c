#include<stdio.h>

#define QUOTED_STRING(str) #str

int main()
{
//char a[]="god is great";

char a[]=QUOTED_STRING("God is great");
printf("%s\n",a);

return 0;
}
