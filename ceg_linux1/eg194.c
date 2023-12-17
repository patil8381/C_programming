#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
char a[6];
char m;
printf("Enter a String : ");
fgets(a,6,stdin);
__fpurge(stdin);
printf("Enter a character : ");
m=getchar();
__fpurge(stdin);
printf("\n\n");
printf("content of array (a) is (%s)\n",a);
printf("Number in char m is (%d)\n",m);
return 0;
}
