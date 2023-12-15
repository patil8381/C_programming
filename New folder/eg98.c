#include<stdio.h>
int calculate_sum(int *j,int rows, int columns)
{
int total,y;
int total_elements=rows*columns;
total=0;
for(y=0;y<total_elements;y++)
{
total=total+j[y];		// here pointer j is used as an array 
//printf("Added %d\n",j[y]);;
}
\
return total;
}
int main()
{
int x[5];
int *j;
int y,total;

for(y=0;y<5;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}

total=calculate_sum((int *)x,1,5);
printf("Total is %d\n",total);
return 0;
}