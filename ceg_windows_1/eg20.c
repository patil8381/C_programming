#include<stdio.h>
int main()
{
int lines,stars,x,y;
lines=5;
stars=1;
x=1;
while(x<=lines)
{
y=1;
while(y<=stars)
{
printf("*");
y++;
}
printf("\n");
stars++;
x++;
}


return 0;
}