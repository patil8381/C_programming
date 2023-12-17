#include<stdio.h>
struct abc
{
struct pqr
{
int e,f;	
char g,h;
}p;// here this semicolon will give an error msg , compiler thinks the struct abc ended here

int x,y;

};

int main()
{
struct (abc).(prq) k;
k.e=10;
k.f=20;
k.g='A';
k.h='B';
printf("%d %d %c %c\n",k.e,k.f,k.g,k.h);
return 0;
}
