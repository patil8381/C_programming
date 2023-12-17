#include<stdio.h>

void left_trim(char *str)
{
char *p;
if(str==NULL) return ;
else if(*str=='\0') return ;
else if(*str!=' ') return ;

p=str;
while(*p==' ') p++;
while(*p!='\0') 
{
*str=*p;
str++;
p++;
}
*str='\0';
}

void right_trim(char *str)
{
if(str==NULL) return ;
else if(*str=='\0') return ;
char *p;
p=str;
while(*p!='\0') p++;
p--;
while(p>=str && *p==' ') p--;
p++;
*p='\0';

}

