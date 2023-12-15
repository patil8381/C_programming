#include<stdio.h>
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);

switch(x)
{
default : 
printf("Invalid Input \n");
break; 

case 10 :
printf("Good\n");
break;
case 20 : 
printf("Bad\n");
break;
case 30 :
printf("Ugly\n");


}
return 0;
}