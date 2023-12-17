#include<stdio.h>
int main()
{
int x;
x=12;
printf("Enter a  number :");
scanf("%d",&x);
if(x<50) printf("less than 50\n");
if(x>50) printf("greater than 50\n");
if(x==50) printf("Equal to 50\n");

return 0;
}
