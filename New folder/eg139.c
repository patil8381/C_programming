#include<stdio.h>
int compare_string(char *,char *);
int main()
{
char a[51];
char b[51];
int x;
printf("Enter first string : ");
scanf("%s",a);
printf("Enter second string : ");
scanf("%s",b);

x=compare_string(a,b);
if(x==0)
{
printf("Strings are equal\n");
}
else
{
printf("Strings are not equal\n");
}
return 0;
}

int compare_string(char *p,char *q)
{
while(*p!='\0' && *q!='\0' && *p==*q)
{
q++;
p++;
}
return (*p)-(*q);
}