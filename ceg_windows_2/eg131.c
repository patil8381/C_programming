#include<stdio.h>
int get_string_length(char *p)
{
int x=0;
while(*p!='\0')
{
p++;
x++;
}
return x;
}
int main()
{
int i;
char a[51];
printf("Enter a string : ");
scanf("%s",a);
printf("string in a is (%s)\n",a);
i=get_string_length(a);
printf("Length of string a (%s) is (%d)\n",a,i);

return 0;
}