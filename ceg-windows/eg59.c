#include<stdio.h>
int main()
{
char m;
printf("Enter a character : ");
scanf("%c",&m);
if(m>=97 && m<=122)
{
m=m-32;
}
printf("%c\n",m);
return 0;
}