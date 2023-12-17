#include<stdio.h>
const char *get_slogan()
{
return "God is great";
}

int main()
{
const char *p;
p=get_slogan();
printf("%s\n",p);

return 0;
}
