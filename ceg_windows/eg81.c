#include<stdio.h>
int main()
{
int x[5];
int *p;
int y,t;

for(y=0;y<=4;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
p=&x[0];
t=0;
for(y=0;y<=4;y++)
{
t=t+*p;
p++;
}
printf("Total is %d\n",t);
return 0;
}