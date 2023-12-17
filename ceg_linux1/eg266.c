#include<stdio.h>
struct abc
{
struct pqr
{
int e,f;	
char g,h;
};	// here this semicolon will give an error msg , compiler thinks the struct abc ended here
int x,y;

struct pqr p;

};

int main()
{
	
return 0;
}
