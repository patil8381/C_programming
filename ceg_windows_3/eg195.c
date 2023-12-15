#include<stdio.h>
#include<string.h>
int main()
{
char a[7];
char m,k;
printf("Enter a String : ");
fgets(a,7,stdin);
a[strlen(a)-1]='\0';
while((m=getchar())!='\n' && m!=EOF);
printf("Enter a char : ");
k = getchar();
while((m=getchar())!='\n' && m!=EOF);
printf("\n\n");
printf("String in a is (%s)\n",a);
printf("String in k is (%c)\n",k);
return 0;
}