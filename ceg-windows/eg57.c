#include<stdio.h>
int main()
{
unsigned char m;
m=0;
while(m<=255)
{
printf("(%d  %c) ",m,m);
m++;
if(m==255)
{
break;
}
}
return 0;
}