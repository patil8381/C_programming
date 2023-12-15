#include<stdio.h>
int main()
{
int x,y,z,j;
char faltu;
printf("enter a number :");
scanf("%d",&x);
j=33;
while(j==33)
{
faltu=getchar();
if(faltu =='\n' || faltu == EOF) break;
}
printf("enter another number : ");
scanf("%d",&y);
j=33;
while(j==33)
{
faltu=getchar();
if(faltu =='\n' || faltu == EOF) break;
}
z=x+y;
printf("Total is %d\n",z);

return 0;
}