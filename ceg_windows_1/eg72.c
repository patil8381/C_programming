#include<stdio.h>
int main()
{
printf("int size in d %d\n",sizeof(int));
printf("unsigned int in d %d\n",sizeof(unsigned int));
printf("unsigned int in u %u\n",sizeof(unsigned int));
printf("long unsigned int in d %d\n",sizeof(long unsigned int));
printf("long unsigned int in lu %lu\n",sizeof(long unsigned int));
printf("long long unsigned int in d %d\n",sizeof(long long unsigned int));
printf("long long unsigned int in lu %lu\n",sizeof(long long unsigned int));
printf("long long unsigned int in llu %llu\n",sizeof(long long unsigned int));
printf("\nNotes : use appropriate format specifier for everything what u want to print\n ");
return 0;
}