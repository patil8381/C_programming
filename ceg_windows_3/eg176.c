#include<stdio.h>
int main()
{
int x,r;
char m,faltu;

printf("Enter a number: ");
scanf("%d",&x);
r=100;
while(r==100)
{
faltu=getchar();
if(faltu=='\n' || faltu==EOF)
{
break;
}
}

printf("Enter a number: ");
scanf("%c",&m);
r=100;
while(r==100)
{
faltu=getchar();
if(faltu=='\n' || faltu==EOF)
{
break;
}
}

printf("\n\n");
printf("Value of x is (%d)\n",x);
printf("number in m is (%d)\n",m);
return 0;
}