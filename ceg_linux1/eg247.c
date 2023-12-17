#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

int main()
{
int *x,*p;

int r,i,total;
printf("Enter requirement :");
scanf("%d",&r);
__fpurge(stdin);

if(r<=0)
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

p=x;	// allocatin g the memory address to p
for(i=0;i<r;i++)
{
printf("Enter a number : ");
scanf("%d",p);
__fpurge(stdin);
p++;
}

p=x;		// reset the address to p 
for(i=0;i<r;i++)
{
total += *p;
p++;
}
printf("total is %d\n",total);

free(x);		// very very mportant 

return 0;
}
