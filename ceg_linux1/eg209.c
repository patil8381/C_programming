#include<stdio.h>
void sam()
{
printf("Hello\n");
}

int main()
{
void (*p)();
p=sam;
p();
return 0;
}
