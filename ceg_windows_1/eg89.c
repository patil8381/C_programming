#include<stdio.h>
int main()
{
int x[4][3];
int (*p)[3];	// p rounf block me necessary hai
int *j;
printf("Address of x is %llu\n",&x);
p=x;	// will become p=&x[0] and data type of &x[0] is int(*)[3] 

printf("Address of x[0] is %llu\n",&x[0]);
printf("p=x, will become p=&x[0], address in p is %llu\n",p);
p++;	// arithmatic will be performed as p=p+(sizeof(int[3])*1)

printf("Address of x[1] is %llu\n",&x[1]);
printf("p=x, address in p is %llu\n",p);
p++;	// arithmatic will be performed ad p=p+(sizeof(int[3])*1)

printf("Address of x[2] is %llu\n",&x[2]);
printf("p++, address in p is %llu\n",p);
p++; 	// arithmatic will be performed a s p=p+(sizeof(int[3])*1)

printf("address of x[3] is %llu\n",&x[3]);
printf("p++, address in p is %llu\n",p);

return 0;
}