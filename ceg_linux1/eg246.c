#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

int main()
{
int *x;
int r,i,total;
printf("Enter requirement :");
scanf("%d",&r);
__fpurge(stdin);

if(r<=0 || r>100)
{
printf("Invalid Input\n");
return 0;
}

x=(int *)malloc(r*sizeof(int));

if(x==NULL)
{
printf("Not enough memory avaliable to perform operation \n");
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

free(x);

return 0;
}
