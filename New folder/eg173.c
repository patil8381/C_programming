// this is all trim function 

#include<stdio.h>
void all_trim(char *);
void left_trim(char *,char *);
void right_trim(char *);
int main()
{
char a[51];
printf("Enter a String :");
scanf("%[^n]%*c",a);
printf("String before all trim is (%s)\n",a);
all_trim(a);
printf("String after  all trim is (%s)\n",a);
return 0;
}

void all_trim(char *str)
{
char *m;
left_trim(str,m);
m=str;
m++;
while(*str != '\0'){
if(*m == ' ') left_trim(str,m);


}
}

void left_trim(char *str,char *k)
{

if(*str == '\0')
{
return ;
}
k=str;
k++;
while(*k == ' ')
{
k++;
}
str+=2;
while(*k != ' ')
{
*str=*k;
str++;
k++;
}

}


void right_trim(char *str)
{
}