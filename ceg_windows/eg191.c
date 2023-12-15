#include<stdio.h>
int main()
{
int x,y,z;
char m;
printf("Enter a number: ");
scanf("%d",&x);
while((m=getchar()) != '\n' && m!=EOF);
printf("Enter another number :");
scanf("%d",&y);
while((m=getchar())!='\n' && m!=EOF);
z=x+y;
printf("Total is (%d)\n",z);

return 0;
}