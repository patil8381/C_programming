#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
char a[10][12];
int x,y,e,f;
char tmp[11];		//for swaping 
y=0;
while(y<=9)
{
printf("Enter a string : ");
fgets(a[y],12,stdin);
__fpurge(stdin);
a[y][strlen(a[y]-1)]='\0';
y++;
}

// data entery done , accepted 10 string now lets sort them 

e=0;
while(e<=8)
{
f=e+1;
while(f<=9)
{
x=strcmp(a[f],a[e]);
if(x<0) 		//string at f is lesser at index weight comparison to string at e index 
{
strcpy(tmp,a[e]);
strcpy(a[e],a[f]);
strcpy(a[f],tmp);
}
f++;
}
e++;
}
printf("The sorted strings are as follows \n");
for(y=0;y<=9;y++)  printf("%s\n",a[y]);

	
return 0;
}
