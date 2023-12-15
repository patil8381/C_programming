#include<stdio.h>
int main()
{
int x[5][3]; 	// in all 15 elements of type int x is an array of type int[3]
		// each of those 5 elements of type int 
int *j;
int total,y;

x[0][0]=1;
x[0][1]=2;
x[0][2]=10;
x[1][0]=100;
x[1][1]=200;
x[1][2]=300;
x[2][0]=400;
x[2][1]=500;
x[2][2]=1000;
x[3][0]=2000;
x[3][1]=3000;
x[3][2]=4000;
x[4][0]=5000;
x[4][1]=6000;
x[4][2]=7000;

j=(int *)x;	// will be converted to j=(int *)&x[0]
		// j is pointing to x[0][0]
total = 0;
for(y=0;y<15;y++)
{
total=total+ *j;
printf("Added %d\n",*j);
j++;
}
printf("Total is %d\n",total);

return 0;
}