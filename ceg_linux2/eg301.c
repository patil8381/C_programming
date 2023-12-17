#include<stdio.h>

#define LIST(a,b,...)\
typeof(b) a[]={b,__VA_ARGS__};\
typeof(b) a##_length=(sizeof(a)/sizeof(a[0]))

#define FOR_EACH_ELEMENTS_OF(arr,func)\
int i=0;\
while(i<arr##_length)\
{\
func(arr[i]);\
i++;\
}

void just_do_it(int num)
{
printf("%d\n",num*num);
}

int main()
{
LIST(x,10,20,30,40,50,60);
FOR_EACH_ELEMENTS_OF(x,just_do_it);

return 0;
}
