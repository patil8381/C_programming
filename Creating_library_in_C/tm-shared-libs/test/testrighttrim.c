#include<stdio.h>
#include<tmstrings.h>

int main()
{
char a[] = "Ujjaini is a park in indore city                   ";

printf("Before trim : %s.\n",a);

right_trim(a);

printf("After trim : %s.\n",a);

return 0;
}
