#include<stdio.h>
int count_words(char *);
int main()
{
char a[101];
int count;
printf("Enter a String : ");
scanf("%[^\n]%*c",a);
count=count_words(a);
printf("Number in words is (%d)\n",count);
return 0;
}
int count_words(char *str)
{
int spaces=0;

if(*str == '\0')
{
return 0;
}
while(*str == ' ')
{
str++;
}
while(*str != '\0')
{
if(*str == ' ')
{
spaces++;
while(*str == ' ')
{
str++;
}
}
else
{
str++;
}
}

if(*(str-1) == ' ')
{
spaces--;
}
return spaces+1;
}