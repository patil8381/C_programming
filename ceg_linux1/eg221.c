#include<stdio.h>
int main()
{
int x,y;
const *p;
x=10;
y=20;
p=&x; 	//correct 
*p=50;	//incorrect 
p=&y;
*p=100;	//incorrect 

return 0;
}
