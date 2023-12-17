#include<stdio.h>
#define ABCD(X,...) printf(#__VA_ARGS__)

int main()
{
ABCD(10,20,30,40);
ABCD(40);

return 0;
}
