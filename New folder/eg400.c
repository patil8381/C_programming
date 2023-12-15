#include<stdio.h>
void fpurge()
{
char k;
while( (k=getchar())!='\n' || k==EOF );
}

int main()
{
char a;
char b;

printf("Enter number : ");
scanf("%c",&a);
fpurge();
scanf("%c",&b);

printf("%c",a);
printf("%c",b);

return 0;
}