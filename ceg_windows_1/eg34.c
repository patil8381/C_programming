#include<stdio.h>
int main()
{
int x[10];
int y,largest;
y=0;
while(y<=9)
{
printf("Enter a number :");
scanf("%d",&x[y]);
y++;
}
y=0;
largest=x[0];
while(y<=9)
{
if(x[y]>largest)
{
largest=x[y];
}
y++;
}
printf("largest is %d\n",largest);
return 0;
}