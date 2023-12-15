#include<stdio.h>
int main()
{
int choice,x,y,z;

do
{
printf("1. Add\n");
printf("2. Substract\n");
printf("3. Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter a number : ");
scanf("%d",&x);
printf("Enter another number :");
scanf("%d",&y);
z=x+y;
printf("%d + %d is %d\n",x,y,z);
}
if(choice == 2)
{
printf("Enter a number : ");
scanf("%d",&x);
printf("Enter another number : ");
scanf("%d",&y);
z=x-y;
printf("%d - %d is %d\n",x,y,z);
}
if(choice < 1 || choice > 3)
{
printf("Invalid Input\n");
}

}while(choice!=3);

return 0;
}