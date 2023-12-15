#include<stdio.h>
int main()
{
int lines,spaces,stars,x,y;

lines=5;
spaces=4;
stars=1;
x=1;
while(x<=lines)
{
y=1;
while(y<=spaces)
{
printf(" ");
y++;
}
y=1;
while(y<=stars)
{
printf("*");
y++;
}
printf("\n");

spaces--;
stars+=2;
x++;

}

return 0;
}