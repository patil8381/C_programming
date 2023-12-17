#include<stdio.h>
#define PRINT_GREATER(e,f)\
if(e>f)\
{\
printf("%d is greater\n",e);\
}\
else\
{\
printf("%d is greater\n",f);\
}

int main()
{
PRINT_GREATER(100,200);
PRINT_GREATER(10,2)

return 0;
}
