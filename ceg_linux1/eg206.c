#include<stdio.h>
int main(int c,char *v[])
{
int i;
printf("Number of command line arguments are (%d)\n",c);
printf("the command line arguments are as follows : \n");
for(i=0;i<c;i++)
{
printf("string at command line argument index (%d) is (%s)\n",i,v[i]);
}

return 0;
}
