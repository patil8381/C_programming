#include<stdio.h>

// int can be refer as boolean 
// easy , boolean is alias of int

#define boolean int
#define TRUE 1
#define True 1
#define true 1
#define FALSE 0
#define False 0
#define false 0

int main()
{
boolean x;
int y;
y=1;
x=TRUE;
while(x==TRUE)
{
printf("%d\n",y);
if(y==5) x=false;
y++;
}

return 0;
}
