#include<stdio.h>
#include<string.h>
int main()
{
char a[21]="God is Great";
char *ptr;
long unsigned int position;

ptr = strchr(a,'i');
if(ptr==NULL) printf("Not Found");
else 
{
position = ptr-a;
printf("Found at index(%lu)\n",position);
}
return 0;
}

