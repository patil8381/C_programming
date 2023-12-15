#include<stdio.h>
int main()
{
char a[51]= {"God is Great"};
char m;
printf("initailly the array (a) is (%s)\n",a);
printf("Enter a String : ");
scanf("%[abc]",a);
printf("Enter a character ");
scanf("%c",&m);
printf("\n\n----------------------------\n\n");
printf("String is (%s)\n",a);
printf("Number in m is (%d)\n",m);

return 0;
}