#include<stdio.h>
#include<stdio_ext.h>
int main()
{
int x;
char m;
printf("Enter a Number :");
scanf("%d",&x);
__fpurge(stdin);
printf("Enter a char : ");
scanf("%c",&m);
//m = getchar();  // this will take char input and works same as scanf("%c",&m);
__fpurge(stdin);
printf("\n\n");
printf("Value of x is (%d)\n",x);
printf("Number in m is (%d)\n",m);

return 0;
}
