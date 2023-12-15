#include<stdio.h>
void concatinate(char *,char *);
int main()
{
char a[51];
char b[51];
printf("Enter first String : ");
scanf("%[^\n]%*c",a);
printf("Enter Second String : ");
scanf("%[^\n]%*c",b);
printf("String before concatinate is (%s)\n",a);
concatinate(a,b);
printf("String after concatinate is (%s)\n",a);
return 0;
}
void concatinate(char *str1,char *str2)
{
if(*str1 == '\0' || *str2 == '\0') return ;

while(*str1 != '\0')
{
str1++;
}
while(*str2 != '\0')
{
*str1=*str2;
str1++;
str2++;
}
*str1='\0';
}