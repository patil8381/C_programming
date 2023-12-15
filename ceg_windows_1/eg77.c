#include<stdio.h>
int main()
{
int a;
printf("Address of a s %llu\n",&a);
printf("(Address of a + 1 is %llu\n",&a+1);
printf("Address of a is %llu\n",&a);
printf("(Address of a) is - 10 is %llu\n",&a-10);

printf("\n\nNow address arithmatic in array \n\n");
int x[5];
printf("Address of x[0]+1 is %llu\n",&x[0]);
printf("(Address of x[0])+1 is %llu\n",&x[0]+1);
printf("Address of x is %llu\n",&x);
printf("(Address of x) +1 is %llu\n",&x+1);
return 0;
}