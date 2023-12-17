#include<stdio.h>

#define declareAndAssign(data_type,variable,val)\
data_type variable=val

int main()
{
char b[]="Ujjain";
declareAndAssign(int,x,10);
declareAndAssign(int,y,210);
declareAndAssign(char,a[21],"aman");

printf("%d\n",x);
printf("%d\n",y);
printf("%s\n",a);
printf("%s\n",b);

return 0;
}
