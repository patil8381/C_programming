#include<stdio.h>
void to_proper_case(char *p)
{
if(*p>=97 && *p<=122)
{
*p=*p-32;
}
p++;
// now *p at p[1] or a[1]
while(*p!='\0')
{
if(*p>=65 && *p<=90)
{
*p=*p+32;
}
p++;
}
}
int main()
{
char a[51];
printf("Enter a string : ");
scanf("%s",a);
printf("String in a is (%s)\n",a);
to_proper_case(a);
printf("After proper case, string in array a is (%s)\n",a);
return 0;
}