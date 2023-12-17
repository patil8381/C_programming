#include<stdio.h>
#include<string.h>
int main()
{
char a[11] = {'A','A','A','A','A','A','A','A','A','A','\0'};
char b[11] = {'G','O','A','\0','D','D','D','D','D','D','D'};
int i;
printf("string in a is (%s) and length is (%lu)\n",a,strlen(a));

//strcpy string copy , this will copy string b in string a untill it gets \n then it will stop
strcpy(a,b);
printf("\n\n");
for(i=0;i<10;i++) printf("(%c )",a[i]);
printf("\n");
return 0;
}
