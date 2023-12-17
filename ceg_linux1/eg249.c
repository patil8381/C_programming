#include<stdio.h>
#include<stdlib.h>

int main()
{
int r=5;
int *x;
int i;
x=(int *)calloc(r,sizeof(int));

if(x==NULL)
{
printf("Memory not available .");
return 0;
}
for(i=0;i<r;i++)
{
printf("%d\n", x[i]);
}
free(x);
return 0;
}
