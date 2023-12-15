#include<stdio.h>
int main()
{
char m[6];
char g[6];
g[0]='A';
g[1]='B';
m[0]='U';
m[1]='J';
m[2]='J';
m[3]='A';
m[4]='I';
m[5]='N';
printf("%s\n",m);		// should be treated as printf("%s",&m[0]);
printf("%s\n",g);
printf("%llu\n",&m);
printf("%llu\n",&g);
printf("g[2] is %d\n",g[2]);
printf("g[3] is %d\n",g[2]);
printf("g[4] is %d\n",g[2]);
printf("g[5] is %d\n",g[2]);
printf("g[6] is %d\n",g[2]);
return 0;
}