#include<stdio.h>
#include<string.h>
int main()
{
char a[31]="Ujjain";
char b[15]="God is Great";
strncat(a,b,5);
printf("%s\n",a);
strcpy(b,"Goa");
strncat(a,b,5);
printf("%s\n",a);
return 0;
}
