#include<stdio.h>

void calculate_simple_interest(int *,int *,int *,int *);

int main()
{
int simple_interest,principle,rate,time;
//simple_interest=0;
printf("Enter priciple amount : ");
scanf("%d",&principle);
printf("Enter rate of interest : ");
scanf("%d",&rate);
printf("Enter period of time (in months) : ");
scanf("%d",&time);


calculate_simple_interest(&simple_interest,&principle,&rate,&time);

printf("Principle (%d)\n",principle);
printf("rate (%7d)\n",rate);
printf("Time (%7d)\n",time);
printf("simple_interest (%d)\n",simple_interest);

return 0;
}

void calculate_simple_interest(int *si,int *p,int *r,int *t)
{
int years=*t/12;
*si=((*p)*(*r)*(years)/100);
}