#include<stdio.h>

#define RANGE_LOOP(variable,e,f,g) for(variable=e;variable<=f;variable=variable+g){
#define END_RANGE_LOOP }

int main()
{
int x;
RANGE_LOOP(x,1,10,2)
	printf("%d\n",x);
END_RANGE_LOOP

return 0;
}

