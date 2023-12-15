#include<stdio.h>
int main()
{
int x;
x=995;
printf("Value of x is (%d)\n",x);
printf("Enter a Number : ");
scanf("%*d",&x);		// this hould be scanf(%*d), the argument is of no use
printf("Value of x is (%d)\n",x);

return 0;
}