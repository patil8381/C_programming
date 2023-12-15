#include<stdio.h>
int main()
{
int x,y;
char m;
x=100;
m='A';
printf("Value of x is (%d)\n",x);
printf("Number in x is (%d)\n",m);
printf("Enter a Number : ");
scanf("%d%*c",&x);		// here %*c will skip the input done after a number 
printf("Enter a character : ");
scanf("%c",&m);
printf("Enter a Number : ");
scanf("%d",&y);
printf("\n\n----------------------------\n\n");
printf("Value of x is (%d)\n",x);
printf("Number in m is (%d)\n",m);
printf("Value of y is (%d)\n",y);
return 0;
}