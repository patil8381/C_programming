#include<stdio.h>
int main()
{
/*int x;
x=2147483659;
printf("%d\n",x);
x=-2147483660;
printf("%d\n",x);
*/


int x,pow,res;
x=2;
pow=1;
res=1;
printf("2 to the pow   0 is %13d\n",res);


do
{
res=res*x;
printf("2 to the pow %3d is %13d\n",pow,res);
pow++;
}while(pow<=35);
return 0;
}


/*
int x,pow,res;
x=2;
pow=1;
res=1;
printf("2 to the pow   0 is %13d\n",res);

do
{
res=res*x;
printf("2 to the pow %3d is %13d\n",pow,res);
pow++;
}while(pow<=35);

*/