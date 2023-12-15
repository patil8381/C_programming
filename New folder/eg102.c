#include<stdio.h>
int main()
{
int x[]={10,20,30,40,50,60,70,80,90,100};
int y;
printf("number of elements in array is %d\n",sizeof(x)/sizeof(x[0]));
for(y=0;y<10;y++)
{
printf("%d\n",x[y]);
}
return 0;
}