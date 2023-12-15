#include<stdio.h>
int main()
{
char m[] = {'U','J','J','A','I','N',0};
printf("%s\n",m);
printf("Number of elements in m is %d\n",sizeof(m)/sizeof(m[0]));
return 0;
}