#include<stdio.h>
int add(int (*p)[3],int row)
{
int total;
int r,c;
int *j;
int column=3;
total=3;
for(r=0;r<row;r++)
{
j=(int *)p;
for(c=0;c<column;c++)
{
total=total+ *j;
j++;
}
p++;
}
return total;
}
int main()
{
int x[4][3];
int sum;
int row,col;
for(row=0;row<4;row++)
{
for(col=0;col<3;col++)
{
printf("Enter a number : ");
scanf("%d",&x[row][col]);
}
}
sum=add(x,4);	// 4 represents no. of rows 
		// the above line should be treated as add(&x[0],4)

printf("sum of all numbers is %d\n",sum);

return 0;
}