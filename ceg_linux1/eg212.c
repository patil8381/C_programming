#include<stdio.h>
int is_even(int num)
{
if(num%2==0) return 1;
else return 0;
}
int is_odd(int num)
{
if(num%2==0) return 0;
else return 1;
}

int is_prime(int num)
{
int y,end_point;
if(num <= 1) return 0;
y=2;
end_point=num/2;
while(y<=end_point)
{
if(num%y==0) return 0;
y++;
}
return 1;
}

int filter_it(int *source,int source_size, int *target, int (*predicate)())
{
int j,k;
int *m;
m=source;
k=0;
for(j=0;j<source_size;j++)
{
if(predicate(*m)==1)
{
target[k]=*m;
k++;
}
m++;
}
return k;
}

int main()
{
int x[10]={1,2,3,4,5,6,7,8,9,10};
int y[10];
int filtered_count , i;

printf("collection is as follws\n");
for(i=0;i<10;i++) printf("%d ",x[i]);
printf("\n\n---------------------\n\n");

filtered_count=filter_it(x,10,y,is_even);
printf("Even no filtered as follows: \n");
for(i=0;i<filtered_count ;i++) printf("%d",y[i]);
printf("\n\n---------------------\n\n");

filtered_count=filter_it(x,10,y,is_odd);
printf("Odd no filtered as follows: \n");
for(i=0;i<filtered_count ;i++) printf("%d ",y[i]);
printf("\n\n---------------------\n\n");

filtered_count=filter_it(x,10,y,is_prime);
printf("prime no are as follows: \n");
for(i=0;i<filtered_count;i++) printf("%d ",y[i]);
printf("\n\n---------------------\n\n");

return 0;
}
