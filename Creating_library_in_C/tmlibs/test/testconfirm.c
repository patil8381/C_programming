#include<stdio.h>
#include<tmui.h>

int main()
{
YES_NO answer;
answer=confirm("are you sure");
if(answer==YES)  printf("Just do it, answer is yes\n");
else printf("Don't do it, answer is no\n");

return 0;
}
