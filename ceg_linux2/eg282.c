#include<stdio.h>

#define compute_sum_and_diff(e,f,g,h)   __compute_sum_and_diff(e,f,&g,&h )

void __compute_sum_and_diff(int p,int q,int *r, int *s)
{
*r=p+q;
*s=p-q;
}

int main()
{
int x,y,a,b;
x=10;
y=20;
compute_sum_and_diff(x,y,a,b);		// this is not a function this is a macro

printf("Total is %d\n",a);
printf("difference is %d\n",b);

return 0;
}
