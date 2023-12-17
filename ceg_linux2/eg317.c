#include<stdio.h>
#include<stdarg.h>

int add( int n,...)
{
int t,i;
int number ;
va_list lst;
va_start (lst,n);

t=0;
for(i=0;i<n;i++)
{
number=va_arg(lst,int);
printf("extracted number %d\n",number);
t=t+number;
}
va_end(lst);
return 0;
}

int main()
{
int total;
total=add(2,1,5,14,20);
printf("Total is %d\n",total);
total=add(32,1,35,82,992,8,91,12);
printf("Total is %d\n",total);

return 0;
}
