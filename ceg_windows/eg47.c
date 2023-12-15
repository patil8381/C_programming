/*
here we can add multiline comments.
in this

*/
#include<stdio.h>
//the following line declares the global x
int x;	//global x
//the following line is declaration of a sam function 
void sam(); //this function has no return type
int main()
{
x=10;	//global x
printf("%d\n",x);	//global x
sam();	
printf("%d\n",x);	//global x
return 0;
}
void sam()
{
int x;	//local x
x=203;	//local x
printf("%d\n",x);	//local x
{
extern int x;
printf("%d\n",x);	//global x
x=5050;	//global x
}
printf("%d\n",x);	//local x
}