#include<stdio.h>
void right_trim(char *);
int main()
{
char a[101];
printf("Enter a String : ");
scanf("%[^\n]%*c",a);
printf("String before trim is (%s)\n",a);
right_trim(a);
printf("String after trim is (%s)\n",a);
return 0;
}

void right_trim(char *str)
{
char *start;
if(str==NULL || *str == '\0')
{
return ;
}

start=str;

while(*str != '\0')
{
str++;
}

if(*(str-1) == ' ')
{
str--;
while(str>=start && *str == ' ')
{
str--;
}
*str++;

}

*str = '\0';

}