#include<stdio.h>
int main()
{
char a[20]="Hello World";
char b[10];
printf("a is %s\n",&a);

int i=0,j=0;
while(a[i]!='\0')
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u')
{
i++;
continue;
}
else
{
b[j]=a[i];
j++;
i++;
}
}
b[j]='\0';

printf("b is %s",&b);

return 0;
}