#include<stdio.h>
#include<string.h>
int main()
{
char a[21]="God is Great";
char b[10]="is";
char *ptr;
long unsigned int position;

ptr = strstr(a,b);
if(ptr==NULL) printf("Not Found\n");
else 
{
position = ptr-a;
printf("(%s) found at index (%lu) in (%s) \n",b,position,a);
}
return 0;
}

