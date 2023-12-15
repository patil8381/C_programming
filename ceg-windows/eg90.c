#include<stdio.h>
int main()
{
int x[4][3];
int (*k)[3];
int *j;
int row,col;
k=x;
j=(int *)k;

printf("Address in K is %llu\n",k);
printf("Address in j is %llu\n",j);
*j=10;
j++;
*j=20;
j++;
*j=30;
k++;
j=(int *)k;
printf("Address in k is %llu\n",k);
printf("Address in j is %llu\n",j);

*j=40;
j++;
*j=50;
j++;
*j=60;
k++;
j=(int *)k;
printf("Address in k is %llu\n",k);
printf("Address in j is %llu\n",j);

*j=70;
j++;
*j=80;
j++;
*j=90;
k++;
j=(int *)k;
printf("Address in k is %llu\n",k);
printf("Address in j is %llu\n",j);

*j=100;
j++;
*j=110;
j++;
*j=120;

for(row=0;row<4;row++)
{
for(col=0;col<3;col++)
{
printf("%4d ",x[row][col]);
}
printf("\n");
}
 
return 0;
}