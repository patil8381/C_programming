#include<stdio.h>
int main()
{
int x,r;
char m;
char faltu;
printf("Enter a number : ");
scanf("%d",&x);
r = '0';
while(r == '0')
{
faltu=getchar();
if(faltu=='\n' || faltu==EOF)	// currently dont no What EOF is .
{
break;
}

}
printf("Enter a character : ");
scanf("%c",&m);
r = '0';
while(r == '0')
{
faltu=getchar();
if(faltu=='\n' || faltu==EOF)	// currently dont no What EOF is .
{
break;
}

}
printf("\n\n---------------------------\n\n");
printf("Value of x is (%d)\n",x);
printf("Value of y is (%d)\n",m);

return 0;
}

