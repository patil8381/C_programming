#include<stdio.h>
int main()
{
int x;
int y[7];
int z[10][20];
char m;
char g[7];
char k[20][30];

printf("%lu\n",sizeof(x));
printf("%lu\n",sizeof(y));
printf("%lu\n",sizeof(z));
printf("%lu\n",sizeof(int));
printf("%lu\n",sizeof(int[7]));
printf("%lu\n",sizeof(int[10][20]));

printf("%lu\n",sizeof(m));
printf("%lu\n",sizeof(g));
printf("%lu\n",sizeof(k));
printf("%lu\n",sizeof(char));
printf("%lu\n",sizeof(char[7]));
printf("%lu\n",sizeof(char[20][30]));

return 0;
}