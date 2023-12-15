#include<stdio.h>
int main()
{
// incorrect , followinf line is incorrect 
// warning says  note: declaration of 'x' as multidimensional array must have bounds for all dimensions except the first
int x[][]={
{10,20,30,40,50},
{60,70,80,90,100},
{110,120,130,140,150,160},
};
int r,c;
printf("number of elements : %d\n",sizeof(x)/sizeof(x[0][0]));
for(r=0;r<4;r++)
{
for(c=0;c<3;c++)
{
printf("%4d",x[r][c]);
}
printf("\n");
}
return 0;
}