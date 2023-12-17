// creating a crud application

#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
int roll_number;
char name[26];
struct Student *next;
};

void add_student();
void update_student();
void delete_student();
void search_student();
void display_list_of_students();
void destroy_list();
void display_list_of_students_bottom_to_top();
int __display_list_of_students_bottom_to_top(struct Student *,int ,int );

struct Student *s;

int main()
{
s=NULL;
int choice;

do
{
printf("-------------------\n");
printf("	MENU	\n");
printf("-------------------\n");
printf("1 Add student\n");
printf("2 Update student\n");
printf("3 Delete Student\n");
printf("4 Display list of Student (Top to Bottom)\n");
printf("5 display list of student (Bottom to Top)\n");
printf("6 search student\n");
printf("7 EXIT \n");

printf("Enter your choice : ");
scanf("%d",&choice);
__fpurge(stdin);
if(choice<1 || choice>7)
{
printf("Invalid Choice,press enter key to continue...........\n");
getchar();
__fpurge(stdin);
continue;
}
if(choice==1) 	add_student();
else if(choice==2) update_student();
else if(choice==3) delete_student();
else if(choice==4) display_list_of_students();
else if(choice==5) display_list_of_students_bottom_to_top();
else if(choice==6) search_student();
}while(choice!=7);

destroy_list();

return 0;
}

void destroy_list()
{
struct Student *t;
while(s!=NULL)
{
t=s;
s=s->next;
free(t);
}
}

void add_student()
{
char n[27];
int r,found;
char m;
struct Student *t,*j;

printf("-------------------------\n");
printf("	ADD MODULE	\n");
printf("-------------------------\n");
printf("Enter roll number : ");
scanf("%d",&r);
__fpurge(stdin);

if(r<0)
{
printf("Invalid roll number, press enter key to continue..............");
getchar();
__fpurge(stdin);
return ;
}

found=0;
t=s;
while(t!=NULL)
{
if(t->roll_number==r)
{
found=1;
break;
}
t=t->next;
}

if(found==1)
{
printf("That roll number allotted to (%s)\n, press enter to continue..........",t->name);
getchar();
__fpurge(stdin);
return ;
}
printf("Enter a name : ");
fgets(n,27,stdin);
__fpurge(stdin);

n[strlen(n)-1]='\0';
printf("Add Y/N : ");
m=getchar();
__fpurge(stdin);
if(m!='Y' && m!='y')
{
printf("Student not added, press enter key to continue............");
getchar();
__fpurge(stdin);
return ;
}


t=(struct Student *)malloc(sizeof(struct Student));
if(t==NULL)
{
printf("unable to allocate memory, memory not available, press enter key to continue..........");
getchar();
__fpurge(stdin);
}
t->roll_number=r;
strcpy(t->name,n);
t->next=NULL;

if(s==NULL)
{
s=t;
}
else
{
j=s;
while(j->next!=NULL)
{
j=j->next;
}
j->next=t;
}

printf("Student added , press enter key to continue................");
getchar();
__fpurge(stdin);

}


void update_student()
{
int r,found;
char n[27];
char m;
struct Student *t;

printf("-------------------------------\n");
printf("   STUDENT (UPDATE MODULE)\n");
printf("-------------------------------\n");
printf("Enter a roll number : ");
scanf("%d",&r);
__fpurge(stdin);
if(r<=0)
{
printf("Invalid roll number, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}

t=s;
while(t!=NULL)
{
if(t->roll_number==r)
{
found=1;
break;
}
t=t->next;
}
if(found==0)
{
printf("roll number does not exist, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}

printf("Name : %s\n",t->name);
printf("Do you want to edit (Y/n) : ");
m=getchar();
__fpurge(stdin);
if(m!='y' && m!='Y')
{
printf("Student Not updated, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}

printf("Enter a name : ");
fgets(n,27,stdin);
__fpurge(stdin);
n[strlen(n)-1]='\0';
if((strcmp(t->name,n)) == 0)
{
printf("name is same as before, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}
else
{
strcpy(t->name,n);
printf("Name updated, press enter key to continue..........");
getchar();
__fpurge(stdin);
}

}


void delete_student()
{
int r,found;
char m;
struct Student *t,*j;

printf("---------------------------\n");
printf("	DELETE MODULE	\n");
printf("---------------------------\n");
printf("Enter a roll number to delete : ");
scanf("%d",&r);
__fpurge(stdin);
if(r<=0)
{
printf("Invalid roll number, press enter key to conitnue.........");
getchar();
__fpurge(stdin);
return ;
}

found=0;
t=s;
while(t!=NULL)
{
if(t->roll_number==r)
{
found=1;
break;
}
j=t;
t=t->next;
}

if(found==0)
{
printf("roll number not found, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}

if(found==1)
{
printf("Name : %s\n",t->name);
printf("DELETE Y/N : ");
m=getchar();
__fpurge(stdin);
if(m=='y' || m=='Y')
{
if(s==t) s=s->next;
else
{
j->next=t->next;
}
free(t);

printf("Student data deleted, press enter key to contnue...........");
getchar();
__fpurge(stdin);
}
else
{
printf("Student Not Deleted , press enter kay to continue...........");
getchar();
__fpurge(stdin);
}
}

}


void search_student()
{
int r,i,found;
struct Student *t;
printf("--------------------------\n");
printf("	Search Module	\n");
printf("--------------------------\n");
printf("Enter a roll number : ");
scanf("%d",&r);
__fpurge(stdin);
if(r<=0)
{
printf("Invalid roll number, press Enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}

found=0;
t=s;
while(t!=NULL)
{
if(t->roll_number==r)
{
found=1;
break;
}
t=t->next;
}
if(found==0)
{
printf("Roll number not found, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}
printf("Roll number (%d)\n Name : (%s),\npress enter key to continue..........",r,t->name);
getchar();
__fpurge(stdin);
}




int  __display_list_of_students_bottom_to_top(struct Student *t,int serial_number,int page_size)
{
int sno=0;    
int records_printed;

if(t==NULL)
{
return 0;
}

records_printed=__display_list_of_students_bottom_to_top(t->next,serial_number+1,page_size);

if(records_printed%page_size==0)
{
//code to print header

printf("------------------------------------------------\n");
printf("		List of students \n");
printf("------------------------------------------------\n");
printf("S.No.   Roll No.   Name\n");

}

printf("%4d %10d    %s\n",serial_number,t->roll_number,t->name);
records_printed++;

if(records_printed%page_size==0)
{
printf("---------------------------------\n");
printf("press enter key to continue..........");
getchar();
__fpurge(stdin);
}
	
return records_printed;
}


void display_list_of_students_bottom_to_top()
{
int page_size=5;
int records_printed;

if(s==NULL)
{
printf("------------------------------------------------\n");
printf("		List of students \n");
printf("------------------------------------------------\n");
printf("------------------------------------------------\n");
printf("		No stduents added\n");
printf("------------------------------------------------\n");
printf("press enter key to conitnue..........");
getchar();
__fpurge(stdin);
return ;
}

records_printed=__display_list_of_students_bottom_to_top(s,1,page_size);

//if at the end , total number of records printed is not exactly divisible by page size , 
//we need to pot application in wait mode

if(records_printed%page_size!=0)
{
printf("------------------------------------------------\n");
printf("enter key to continue..............");
getchar();
__fpurge(stdin);
}
}


void display_list_of_students()
{
int sno=0;
struct Student *t;
if(s==NULL)
{
printf("------------------------------------------------\n");
printf("		List of students \n");
printf("------------------------------------------------\n");
printf("------------------------------------------------\n");
printf("		No stduents added\n");
printf("------------------------------------------------\n");
printf("press enter key to conitnue..........");
getchar();
__fpurge(stdin);
return ;
}
printf("------------------------------------------------\n");
printf("		List of students \n");
printf("------------------------------------------------\n");
printf("S.No.   Roll No.   Name\n");

for(t=s;t!=NULL;t=t->next)
{
sno++;
printf("%4d %10d    %s\n",sno,t->roll_number,t->name);
}
printf("enter key to continue..............");
getchar();
__fpurge(stdin);
}
