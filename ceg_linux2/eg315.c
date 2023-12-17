#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// GENERIC FUNCTION OF LINEAR SORT

int sort_it(void *ptr2arr,int arr_size,long unsigned int size_of_each_element,int (*ptr2func)(void *,void *) )
{
void *g;
int e,f;
int outer_loop_end_point;
int inner_loop_end_point;

g=malloc(size_of_each_element);
if(g==NULL) return -1;

outer_loop_end_point = arr_size-2;
inner_loop_end_point = arr_size-1;

e=0;
while(e<=outer_loop_end_point)
{
f=e+1;
while(f<=inner_loop_end_point)
{
if(ptr2func(ptr2arr+(f*size_of_each_element),ptr2arr+(e*size_of_each_element) ) )
{
//swap
//memcpy(g,ptr2arr+(e*size_of_each_element),size_of_each_element);
memcpy(g,ptr2arr+(e*size_of_each_element),size_of_each_element);
memcpy(ptr2arr+(e*size_of_each_element),ptr2arr+(f*size_of_each_element),size_of_each_element);
memcpy(ptr2arr+(f*size_of_each_element),g,size_of_each_element);

}
f++;
}
e++;
}

free(g);
return 0;
}


int int_comparator(void *left_operand,void *right_operand)
{
int *l,*r;
l=(int *)left_operand;
r=(int *)right_operand;
if(*l<*r) return 1;
else return 0;
}


int main()
{
int x[] = {10,3,20,4,50,60,3,9,100,-3};
int i, result;

//for(i=0;i<=9;i++) printf("%d\n",x[i]);

result = sort_it(x,10,sizeof(x[0]),int_comparator);
if(result==0)
{
printf("sorted Array\n");
for(i=0;i<=9;i++)	 printf("%d \n",x[i]);
}
else printf("Unable to sort\n");

return 0;
}
