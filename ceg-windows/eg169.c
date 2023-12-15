#include<stdio.h>
void reverse_string(char *);
int main()
{
char a[101];
printf("Enter a String : ");
scanf("%[^\n]",a);
printf("Before reverse, String is (%s)\n",a);
reverse_string(a);
printf("After reverse , String is (%s)\n",a);
return 0;
}
void reverse_string(char *p)
{
char *q;
char m;
if(p==NULL || *p == '\0')
{
return ;
}
q=p;
while(*q != '\0')
{
q++;
}
q--;	// to place k at last character 
while(p<q)
{
m=*p;
*p=*q;
*q=m;
q--;
p++;
}

}