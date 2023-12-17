#include<stdio.h>
#include<string.h>
int main()
{
char a[31]="Mumbai";
char b[11]="Ujjain";
printf("string in array a is (%s)\n",a);
//strcat string concatination , conceptually ( = a+b)
strcat(a,b);		//target , source
printf("string in array a is (%s)\n",a);

return 0;
}
