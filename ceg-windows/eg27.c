#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number : ");
scanf("%d",&x);

if(x>1)
{
z=0;
y=2;
while(y<=x-1)
{
printf("%d is divisible by %d\n",x,y);
if(x%y==0)
{
z=1;
break;
}
y++;
}

}

if(z==0)
{
printf("%d is Prime Number.\n",x);
}
else
{
printf("%d is not a Prime Number.\n",x);
}


return 0;
}