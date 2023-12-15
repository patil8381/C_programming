#include<stdio.h>
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);

switch(x)
{
case 10 :
printf("Good\n");
break;
case 20 : 
printf("Bad\n");
break;
case 30 :
printf("Ugly\n");
break;
default : 
printf("Invalid Input\n");
}
return 0;
}