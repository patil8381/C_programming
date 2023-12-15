#include<stdio.h>
int is_palindrome(char *);
int main()
{
char a[51];
int x;
printf("Enter a string : ");
scanf("%s",a);
x=is_palindrome(a);
if(x==0)
{
printf("(%s) is NOT a Palindrome\n",a);
}
else
{
printf("(%s) is a Palindrome\n",a);
}
return 0;
}
int is_palindrome(char *p)
{
char *q;
if(*p=='\0')
{
return 1;
}
q=p;
while(*q!='\0')
{
q++;
}
q--;
while(p<q && *q==*p)	// here p is string address of the character points to and *p is the value of character which it points
{
p++;
q--;
}
if(p<q)
{
return 0;
}
else
{
return 1;
}
}