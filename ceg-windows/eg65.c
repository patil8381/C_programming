#include<stdio.h>
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);

switch(x)
{
case 10 :
case 20 : 
printf("Good\n");
break;
case 30 : 
case 40 :
printf("Bad\n");
break;
case 50 :
case 60 : 
printf("Ugly\n");
break;

default : 
printf("Invalid Input \n");
break; 

}
return 0;
}