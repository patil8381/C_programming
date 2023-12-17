#include<stdio.h>
#define LET(a,b)\
typeof(b) a=b

#define POINTER(e,f)\
typeof(f) *e=&f

int main()
{
LET(x,10);
POINTER(y,x);
printf("%d\n",*y);
*y=1002;
printf("%d\n",x);


return 0;
}
