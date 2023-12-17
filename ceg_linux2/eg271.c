#include<stdio.h>

typedef char __name[26];

int main()
{
__name names[20];	//as good as weriting char names[20][26];

printf("%lu\n",sizeof(names[0]));
printf("%lu\n",sizeof(names));

return 0;
}
