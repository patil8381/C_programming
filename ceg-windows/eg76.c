#include<stdio.h>
void sam();
void tom(int);
void joy(int,int);
int main()
{
int x,y;
printf("Main starts\n");
printf("Address of int type x is %llu\n",&x);
printf("Address of int type y is %llu\n",&y);
sam();
tom(10);
printf("Main ends\n");
return 0;
}
void sam()
{
int g;
char m;
printf("sam starts \n");
printf("Address of int type g is %llu\n",&g);
printf("Address of char type m us %llu\n",&m);
printf("Sam Ends\n");
}
void tom(int k)
{
char u;
char p;
printf("tom starts\n");
printf("Address of int type k is %llu\n",&k);
printf("Address of char type u is %llu\n",&u);
printf("Address of int type p is %llu\n",&p);
joy(100,200);
printf("tom ends\n");
}
void joy(int a,int b)
{
char c;
char d;
printf("joy starts\n");
printf("Address of int type a is %llu\n",&a);
printf("Address of int type b is %llu\n",&b);
printf("Address of char type c is %llu\n",&c);
printf("Address of char type d is %llu\n",&d);
printf("joy ends\n");
}