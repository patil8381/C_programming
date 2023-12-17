#include<stdio.h>
#include<stdio_ext.h>
int main()
{
int r,i,total;

printf("Enter requirement :");
scanf("%d",&r);
__fpurge(stdin);

int x[r];

if(r<=0 || r>100)
{
printf("Invalid Input\n");
return 0;
}

for(i=0;i<r;i++)
{
printf("Enter a number : ");
scanf("%d",&x[i]);
}

for(i=0;i<r;i++)
{
total += x[i];
}
printf("total is %d\n",total);
return 0;
}
