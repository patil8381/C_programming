#include<stdio.h>
int main()
{
int x,y;
x=50;
y=x<50;		// condition will be evaluated , -0 or 1 will be generated and will be assigned to ty
		// 0 if evaluation is false
		// 1 if evaluation is true
printf("(%d)\n",y);
return 0;
}
