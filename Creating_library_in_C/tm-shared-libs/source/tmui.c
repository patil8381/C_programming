#include<stdio.h>
#include<stdio_ext.h>
#include<tmui.h>

void wait(const char *message)
{
if(*message!='\0') printf("%s\n",message);
printf("Press enter key to continue....");
getchar();
__fpurge(stdin);
}

YES_NO confirm(const char *message)
{
char m;
printf("%s (Y/N) : ",message);
m=getchar();
if(m=='Y' || m=='y') return YES;
else return NO;

}


