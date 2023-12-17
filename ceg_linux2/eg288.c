#include<stdio.h>
#define greater_of(e,f)\
({\
int z;\
if(e>f) z=e;\
else z=f;\
z;\
})



int main()
{
printf("%d\n",greater_of(10,50));
printf("%d\n",greater_of(100,200));

return 0;
}
