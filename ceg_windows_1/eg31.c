#include<stdio.h>
int main()
{
int x;
for(x=1;x<=15;x++)
{
if(x%4!=0)
{
printf("%d\n",x);
continue;
}
printf("cool\n");

}
return 0;
}