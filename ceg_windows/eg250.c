#include<stdio.h>
#include<stdlib.h>

void create_structure();

struct abc 
{
int x;
char m;
};


int main()
{
create_structure();
return 0;
}

void create_structure()
{
int *r;
r=(int *)malloc(1*sizeof(struct abc));



free(r);
}