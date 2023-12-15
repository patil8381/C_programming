#include<stdio.h>
int main()
{
char a[51];
char b[51];
printf("Enter a string : ");
scanf("%s",&a);
printf("Enter a string : ");
scanf("%s",&b);

if(a!=b)
{
printf("a!=b\n");
}
else
{
printf("else\n");
}


return 0;
}