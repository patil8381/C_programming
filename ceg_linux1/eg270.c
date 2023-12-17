#include<stdio.h>
#include<string.h>

typedef char __name[26];

int main()
{
__name n;
printf("%lu\n",sizeof(n));
printf("%lu\n",sizeof(__name));

strcpy(n,"Ramesh");

printf("%s\n",n);

return 0;
}
