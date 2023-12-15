#include<stdio.h>
int main()
{
char a[51];
char b[51];
int y,count,string_length_a,string_length_b;

printf("Enter a string : ");
scanf("%s",a);
printf("Enter a string : ");
scanf("%s",b);
string_length_a=0;
y=0;
while(a[y]!='\0')
{
string_length_a++;
y++;
}
string_length_b=0;
y=0;
while(b[y]!='\0')
{
string_length_b++;
y++;
}
//printf("1st string_length is %d\n",string_length_a);
//printf("1st string_length is %d\n",string_length_b);
if(string_length_a==string_length_b)
{
//printf("Both strings length are equal\n");
}
else
{
printf("Not Equal 1\n");
return 0;
}

count=0;
y=0;
while(a[y]!='\0')
{
if(a[y]==b[y] || (a[y])==(b[y]-32) || (a[y]==(b[y]+32)))
{
count++;
}
else
{
printf("Not equal 2\n");
return 0;
}
y++;
}

if(count==string_length_a)
{
printf("Stings are equal\n");
}
else
{
printf("Strings are Not Equal 3");
}

printf("address of a (%s) is : (%llu)\n",a,a);
printf("address of a (%s) is : (%llu)\n",b,b);

return 0;
}


//printf("a in s *a (%s)\n",&a);		// asdf
//printf("a in %d",*a);			//output is ascii no.

//printf("a in s *a (%s)\n",a[1]);	// error 
//printf("a in s *a (%s)\n",a[1]);	// error
//printf("%s",*a);			// error
//printf("&a[0] is  %c",&a[0]);		// out put is diffrent
//printf(" a %s",a);		// no output
//printf("%s",a[1]);		// error

//printf(" a[1] %c",a[1]);		
