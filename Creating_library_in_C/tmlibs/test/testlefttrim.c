#include<stdio.h>
#include<tmstrings.h>

int main()
{
char a[] = "            God is great";

printf("Before trim  : %s\n",a);

left_trim(a);

printf("After trim : %s\n",a);

return 0;
}
