#include<stdio.h>
void left_trim(char *);
int main()
{
char a[101];
printf("Enter a String : ");
scanf("%[^\n]%*c",a);
printf("String before trim is (%s)\n",a);
left_trim(a);
printf("String after trim is (%s)\n",a);
return 0;
}
void left_trim(char *str)
{
char *k;
if(*str == '\0')
{
return ;
}
k=str;
while(*k == ' ')
{
k++;
}
while(*str != '\0')
{
*str=*k;
str++;
k++;
}
*str = '\0';

}