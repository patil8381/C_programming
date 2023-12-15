#include<stdio.h>
int main()
{
int i;
char city_name[51];
printf("Enter name of city : ");
scanf("%s",city_name);
i=0;
while(city_name[i]!='\0')
{
i++;
}
printf("Length of city_name (%s) is (%d)\n",city_name,i);
return 0;
}