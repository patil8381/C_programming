#include<stdio.h>
#include<string.h>
// look Notes for better Notes and good understanding
// following code is written by Rohit 
void *get_smallest(void *p1,void *p2,void *p3,int (*ptr2func)(void *,void *))
{
int z;
z=ptr2func(p1,p2);
if(z==1) 
{
z=ptr2func(p1,p3);
if(z==1) return p1;
else return p3;
}
else
{
z=ptr2func(p2,p3);
if(z==1) return p2;
else return p3;
}
}

// FOLLOWING CODE  IS WRITTEN BY AMIT 
struct Student
{
int roll_number;
char name[26];
};

int student_comparator(void *left_operand,void *right_operand )
{
struct Student *l,*r;
l=(struct Student *)left_operand;
r=(struct Student *)right_operand;
if(l->roll_number<r->roll_number) return 1;
else return 0;
}

int int_comparator(void *left_operand,void *right_operand )
{
int *l,*r;
l=(int *)left_operand;
r=(int *)right_operand;
if(*l<*r) return 1;
else return 0;
}

int char_comparator(void *left_operand,void *right_operand )
{
char *l,*r;
l=(char *)left_operand;
r=(char *)right_operand;
if(*l<*r) return 1;
else return 0;
}

int main()
{
struct Student s1,s2,s3;
int e,f,g;
char a,b,c;

void *result;
struct Student *s;
int *i;
char *j;

s1.roll_number=103;
strcpy(s1.name,"Chiku kohli");
s2.roll_number=101;
strcpy(s2.name,"Ankit Bayanpurya");
s3.roll_number=102;
strcpy(s3.name,"Bikash Sharma");

result=get_smallest(&s1,&s2,&s3,student_comparator);
s=(struct Student *)result;
printf("smallest element information is (%d) , (%s)\n",s->roll_number,s->name);

e=100;
f=12;
g=323;
result=get_smallest(&e,&f,&g,int_comparator);
i=(int *)result;
printf("smallest number is %d\n",*i);

a='A';
b='Z';
c='M';
result=get_smallest(&a,&b,&c,char_comparator);
j=(char *)result;
printf("smallest number is %c\n",*j);

return 0;
}
