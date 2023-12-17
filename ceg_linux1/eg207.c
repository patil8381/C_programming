#include<stdio.h>
int to_int(char *str)
{
int x,num;
if(str==NULL || *str=='\0') return 0;

char *p=str;
while(*p!='\0') p++;
p--;
num=0;
x=1;
while(p>=str)
{
if(*p<48 || *p>57) return 0;
num = num +((*p-48)*x);
x=x*10;
p--;
}
return num;
}
int main(int count , char *v[])
{
int total , y;
if (count <3)
{
printf("insufficient argument\n");
printf("Usage eg207.c num1 num2 .....\n");
return 0;
}
total = 0;
y=1;
while(y<count)
{total = total +to_int(v[y]);
y++;
}
printf("total is %d\n",total);
return 0;
}
