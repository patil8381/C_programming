#include<stdio.h>
int i_compare_string(char *,char *);
int main()
{
char a[51];
char b[51];
int x;
printf("Enter first string : ");
scanf("%s",a);
printf("Enter second string : ");
scanf("%s",b);

x=i_compare_string(a,b);
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

int i_compare_string(char *p,char *q)
{
char g,t;
if(*p=='\0' && *q!='\0')
{
return (*p)-(*q);
}
if(*p!='\0' && *q=='\0')
{
return (*p)-(*q);
}

while(*p!='\0' && *q!='\0' )
{
g=*p;
t=*q;
if(g>=97 && g<=122)
{
g=g-32;
}
if(t>=97 && t<=122)
{
t=t-32;
}
if(g!=t)
{
break;
}
q++;
p++;
}
if(*p=='\0' && *q=='\0')
{
return 0;
}
return (*p)-(*q);
}