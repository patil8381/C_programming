#include<stdio.h>
int main()
{
int x,y,z,j;
char m;
printf("Enter a Number : ");
scanf("%d",&x);
j=22;
while(j==22)
{
m=getchar();
if(m=='\n' || m==EOF)
{
break;
}
}
printf("Enter another number : ");
scanf("%d",&y);
j=22;
while(j==22)
{
m=getchar();
if(m=='\n' || m==EOF)
{
break;
}
}
z=x+y;
printf("sum is (%d)\n",z);
return 0;
}
