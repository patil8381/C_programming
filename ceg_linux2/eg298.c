#include<stdio.h>
#define LET(a,b)\
typeof(b) a=b

int main()
{
LET(x,10);
printf("%d\n",x);

return 0;
}
