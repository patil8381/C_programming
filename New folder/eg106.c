#include<stdio.h>
int main()
{
int x[10]={[0 ... 9]=2030};
int y;
printf("number of elements : %d\n",sizeof(x)/sizeof(x[y]));
for(y=0;y<10;y++)
{
printf("%d\n",x[y]);
}
return 0;
}