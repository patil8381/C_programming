#include<stdio.h>
int main()
{
char a[51] ;

printf("Enter a String : ");
scanf("%[^\n]",a);

printf("\n\n----------------------------\n\n");
printf("String is (%s)\n",a);

return 0;
}