#include<stdio.h>
#include<stdio_ext.h>
int main()
{
int x,y;
printf("Enter a Number : ");
scanf("%d",&x);
__fpurge(stdin);
printf("Enter another number : ");
scanf("%d",&y);
__fpurge(stdin);
printf("Total is %d\n",x+y);
return 0;
}

