#include<stdio.h>
int main()
{
int x[10];
int y,t;
y=0;
while(y<=9)
{
printf("Enter a nnumber : ");
scanf("%d",&x[y]);
y++;
}

y=0;
while(y<=9)
{
t=t+x[y];
y++;
}
printf("Total is %d\n",t);
return 0;
}