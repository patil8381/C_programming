#include<stdio.h>
#include<tmutil.h>

int main()
{
int x = 100;
int y = 23;
int z;
int result;

printf("Before swapping\n");
printf("x : %d\n",x);
printf("y : %d\n",y);

result=swap(x,y);
if(result!=0) 
{
printf("swap unble to perform"); // this should not be added in projects 
z=x;
x=y;
y=z;
}
printf("After swapping\n");
printf("x : %d\n",x);
printf("y : %d\n",y);

return 0;
}
