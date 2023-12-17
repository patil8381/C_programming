#include<stdio.h>
int sam()
{
printf("Cool\n");
return 20;
}

int main()
{
int x;
if((x=sam()) && x!=20) 	// this is as good as if (x=(sam() && x!=20))  
{
printf("Good\n");
printf("Value of x in if block %d\n",x);
}
printf("Value of x is (%d)\n",x);
return 0;
}
