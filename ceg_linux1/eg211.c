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

int get_count(int *ptr, int sz, int (*predicate)() )
{
int j;
int count = 0;
for(j=0;j<sz;j++) if(predicate(ptr[j])==1) count++;

return count;
}

int main()
{
int x[10]={1,2,3,4,5,6,7,8,9,10};
int even_count;
int odd_count;
int prime_count;
even_count=get_count(x,10,is_even);
odd_count=get_count(x,10,is_odd);
prime_count=get_count(x,10,is_prime);

printf("Collection is as follows : ");
int j;
for(j=0;j<=9;j++) printf("%d ",x[j]);
printf("\n");

printf("even count is %d\n",even_count);
printf("odd count is %d\n",odd_count);
printf("prime count is %d\n",prime_count);

return 0;
}
