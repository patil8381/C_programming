#include<stdio.h>
int main()
{
int x[4][3]={
{},
{},
{},
{},
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