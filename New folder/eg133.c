#include<stdio.h>
void to_upper_case(char *p)
{
while(*p!='\0')
{
if(*p>=97 && *p<=122)	// or (*p>='a' && *p<='z')
{
*p=*p-' '  ; 	// *p=*p-32
}
p++;
 
}

}
int main()
{
char a[51];
printf("Enter a string : ");
scanf("%s",a);
printf("String in a is (%s)\n",a);
to_upper_case(a);
printf("After upper case, string a is (%s)\n",a);
return 0;
}