#include<stdio.h>
int main()
{
int x[][5]={
{10,20,30,40,50},
{60,70,80,90,100,20},	// warning: excess elements in array initializer
{110,120,130,140,150},
};
int r,c;
printf("number of elements : %d\n",sizeof(x)/sizeof(x[0][0]));
for(r=0;r<3;r++)
{
for(c=0;c<5;c++)
{
printf("%4d",x[r][c]);
}
printf("\n");
}
return 0;
}