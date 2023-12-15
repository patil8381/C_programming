#include<stdio.h>
int main()
{
int x[3][3],y[3][3],choice;
int row_index,column_index;
int row_total,column_total,grand_total;

do
{
printf(" Menu : \n");
printf("1. Accept Input.\n");
printf("2. Print Matrix. \n");
printf("3. Transpose Matrix \n");
printf("4. Exit \n");
printf("Enter your choice in (1-4) : ");
scanf("%d",&choice);

if(choice>1 || choice<4)
{
if(choice==1)
{
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
printf("Enter a number in (%d,%d) :",row_index,column_index);
scanf("%d",&x[row_index][column_index]);
}
}
}
if(choice==2)
{
grand_total=0;
for(row_index=0;row_index<=2;row_index++)
{
row_total=0;
for(column_index=0;column_index<=2;column_index++)
{
printf("%12d",x[row_index][column_index]);
grand_total=grand_total+x[row_index][column_index];
row_total=row_total+x[row_index][column_index];
}
printf("%12d",row_total);
printf("\n");
}
for(column_index=0;column_index<=2;column_index++)
{
column_total = 0;
for(row_index=0;row_index<=2;row_index++)
{
column_total=column_total+x[row_index][column_index];
}
printf("%12d",column_total);
}
printf("%12d\n",grand_total);
}

if(choice==3)
{
for(column_index=0;column_index<=2;column_index++)
{
for(row_index=0;row_index<=2;row_index++)
{
y[row_index][column_index]=x[row_index][column_index];
}
}
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
x[column_index][row_index]=y[row_index][column_index];
}
}
printf("\nMatrix transposed.\n\n");
}

if(choice==4)
{
return 0;
}
}
else
{
printf("Invalid Input\n");
return 0;
}

}while(choice!=4);

return 0;
}