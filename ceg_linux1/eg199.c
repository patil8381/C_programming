#include<stdio.h>
#include<string.h>
int main()
{
char a[11]="Ujjain";
char b[11]="Goa";
int x;

x=strcmp(a,b);
printf("%d\n",x);

strcpy(a,"Goa");
strcpy(b,"Ujjain");
x=strcmp(a,b);
printf("%d\n",x);

strcpy(a,"Ujjain");
strcpy(b,"Ujjain");
x=strcmp(a,b);
printf("%d\n",x);

strcpy(a,"Aligarh");
strcpy(a,"Agra");
x=strcmp(a,b);
printf("%d\n",x);

return 0;
}
