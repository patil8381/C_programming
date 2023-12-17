#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
char a[7];
char m;
printf("Enter a string : ");
fgets(a,7,stdin);
if(a[strlen(a)-1]!='\n') while((m=getchar())!='\n' && m!=EOF);
a[strlen(a)-1]='\0';
__fpurge(stdin);
printf("Enter a character : ");
m=getchar();
__fpurge(stdin);
printf("\n\n");
printf("string in (a) is (%s)\n",a);
printf("Number in m is (%d)\n",m);
return 0;
}
