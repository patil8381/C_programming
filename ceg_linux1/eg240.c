//  	_Alignof is an operator that can be used to determine the allingment factor 

#include<stdio.h>
int main()
{

printf("size is %lu, and Allingment factor of int   is %lu\n",sizeof(int),_Alignof(int));

printf("size is %lu, and Allingment factor of long   is %lu\n",sizeof(long),_Alignof(long));
printf("size is %lu, and Allingment factor of long long int   is %lu\n",sizeof(long long int),_Alignof(long long int));
printf("size is %lu, and Allingment factor of char   is %lu\n",sizeof(char),_Alignof(char));
printf("size is %lu, and Allingment factor of float  is %lu\n",sizeof(float),_Alignof(float));
printf("size is %lu, and Allingment factor of double is %lu\n",sizeof(double),_Alignof(double));

return 0;
}
