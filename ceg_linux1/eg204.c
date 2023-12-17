#include<stdio.h>
#include<string.h>
int main()
{
char a[11]={'A','A','A','A','A','A','A','A','A','A','\0'};
char b[15]="God is great";
strncpy(a,b,5);
printf("%s\n",a);
strcpy(b,"God");
strncpy(a,b,5);
printf("%s\n",a);

return 0;
}
