#include<stdio.h>
int main()
{
int y;
char m[15]={"UJJAIN"};		// size of m will be 15 elements, \0 will be added implicitly at index 6
printf("sizeof m in bytes is %d\n",sizeof(m));
printf("Number of elements in m are %d\n",sizeof(m)/sizeof(m[0]));
printf("%s\n",m);
for(y=0;y<15;y++)
{
printf("at %2d index, number is %2d\n",y,m[y]);
}
return 0;
}