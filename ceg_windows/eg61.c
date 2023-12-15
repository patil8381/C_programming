#include<stdio.h>
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);

if(x==10)
{
printf("Good\n");
}
else
{
if(x==20)
{
printf("Bad\n");
}
else
{
if(x==30)
{
printf("Ugly\n");
}
else
{
printf("Invalid Input.\n");
}
}
}
return 0;
}