// Working for gcc -- version 6m3 
#include<stdio.h>
int main()
{
int x;
char m;
printf("enter a number :");
scanf("%d",&x);
fflush(stdin);
printf("Enter a char ");
scanf("%c",&m);
fflush(stdin);
printf("\n\n");
printf("Value of x is (%d)\n",x);
printf("Number in m is (%c)\n",m);

return 0;
}