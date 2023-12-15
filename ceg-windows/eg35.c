#include<stdio.h>
int main()
{
int x[10];
int y,largest,smallest,second_largest;
y=0;
while(y<=9)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
y++;
}

y=0;
largest=x[0];
smallest=x[0];
while(y<=9)
{
if(x[y]>largest)
{
largest = x[y];
}
if(x[y]<smallest)
{
smallest=x[y];
}
y++;
}

if(largest==smallest)
{
printf("All are same.Not able to determine second largest.\n");
}
else
{
y=0;
second_largest=smallest;
while(y<=9)
{
if(x[y]>second_largest && x[y]!=largest)
{
second_largest=x[y];
}
y++;
}
printf("Second Largest is %d\n",second_largest);
}
return 0;
}