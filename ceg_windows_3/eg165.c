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
while(*str != '\0')
{
if(*str ==' ')
{
spaces++;
}
str++;
}
return spaces+1;
}