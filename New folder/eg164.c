#include<stdio.h>
int main()
{
char a[51] ;
char m;
printf("Enter a String : ");
scanf("%[^\n]%*c",a);
printf("Enter a character : ");
scanf("%c",&m);
printf("\n\n----------------------------\n\n");
printf("String is (%s)\n",a);
printf("Value of m as char is (%c) and Number in m is (%d)\n",m,m);
return 0;
}