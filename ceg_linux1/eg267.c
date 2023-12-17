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
struct abc k;
k.p.e=10;
k.p.f=20;
k.p.g='A';
k.p.h='B';
k.x=1000;
k.y=2000;
printf("%d %d %c %c %d %d\n",k.p.e,k.p.f,k.p.g,k.p.h,k.x,k.y);
return 0;
}
