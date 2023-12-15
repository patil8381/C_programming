#include<stdio.h>
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);
if(x<50)
{
printf("Less than 50\n");
}
else
{
if(x>50)
{
printf("Greater than 50\n");
}
else
{
printf("Equals to 50\n");
}
}


return 0;
}