#include<stdio.h>
#include<string.h>
int main()
{
char a[7];
char m,k;
printf("Enter a String : ");
fgets(a,7,stdin);
if(a[strlen(a)-1]!='\n')
{
while((m=getchar())!='\n' && m!=EOF);
}
a[strlen(a)-1]='\0';
printf("Enter a char : ");
k = getchar();
while((m=getchar())!='\n' && m!=EOF);
printf("\n\n");
printf("String in a is (%s)\n",a);
printf("String in k is (%c)\n",k);
return 0;
}