#include<stdio.h>
#include<stdio_ext.h>
int main()
{
int x;
printf("Enter a Number : ");
scanf("%d",&x);
__fpurge(stdin);
switch(x)
{
case 10 :
case 20 : 
printf("Good\n"); 
break;
case 30:
case 40: 
printf("Better\n");
break;
case 50: 
case 60: 
printf("Best\n");
break;
default: 
printf("Can't say\n");
}


return 0;
}

