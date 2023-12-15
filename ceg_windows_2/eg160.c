#include<stdio.h>
int main()
{
char a[51]= {"God is Great"};

printf("initailly the array (a) is (%s)\n",a);
printf("Enter a String : ");
scanf("%[^abc]",a);

printf("\n\n----------------------------\n\n");
printf("String is (%s)\n",a);

return 0;
}