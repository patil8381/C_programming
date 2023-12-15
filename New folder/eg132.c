#include<stdio.h>
void copy_string(char *p,char *q)
{
while(*q!='\0')
{
*p=*q;
p++;
q++;
}
*p='\0';
}
int main()
{
char a[51],b[51];
printf("Enter a string : ");
scanf("%s",a);
printf("String in a is (%s)\n",a);
copy_string(b,a);
printf("String in b is (%s)\n",b);
return 0;
}