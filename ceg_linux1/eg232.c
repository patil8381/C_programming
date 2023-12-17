// creating a crud application

#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

void add_student();
void update_student();
void delete_student();
void search_student();
void display_list_of_student();

struct student
{
int roll_number;
char name[26];
};

struct student s[20];

int number_of_students_added;

int main()
{
number_of_students_added=0;

int choice;

do
{
printf("-------------------\n");
printf("	MENU	\n");
printf("-------------------\n");
printf("1 Add student\n");
printf("2 Update student\n");
printf("3 Delete Student\n");
printf("4 Display list of Student\n");
printf("5 search student\n");
printf("6 EXIT \n");

printf("Enter your choice : ");
scanf("%d",&choice);
__fpurge(stdin);
if(choice<1 || choice>6)
{
printf("Invalid Choice,press enter key to continue...........\n");
getchar();
__fpurge(stdin);
}
if(choice==1)
{
if(number_of_students_added==20) 
{
printf("data of 20 students added , you cannot add moer, 20 is upper lmit, press enter key to continue..........");
getchar();
__fpurge(stdin);
}
else 
{
add_student();
}
}
else if(choice==2) update_student();
else if(choice==3) delete_student();
else if(choice==4) display_list_of_student();
else if(choice==5) search_student();
}while(choice!=6);

return 0;
}


void add_student()
{
char n[27];
int r,i,found;
char m;
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
i=0;
while(i<number_of_students_added)
{
if(s[i].roll_number==r)
{
found=1;
break;
}
i++;
}
if(found==1)
{
printf("That roll number allotted to (%s)\n, press enter to continue..........",s[i].name);
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
s[number_of_students_added].roll_number=r;
strcpy(s[number_of_students_added].name,n);
number_of_students_added++;
printf("Student added , press enter key to continue................");
getchar();
__fpurge(stdin);

}


void update_student()
{
int r,i,found;
char n[27];
char m;
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
found=0;
for(i=0;i<=number_of_students_added;i++)
{
if(s[i].roll_number==r)
{
found=1;
break;
}
}
if(found==0)
{
printf("roll number does not exist, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}
printf("Name : %s\n",s[i].name);
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
if((strcmp(s[i].name,n)) == 0)
{
printf("name is same as before, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}
else
{
strcpy(s[i].name,n);
printf("Name updated, press enter key to continue..........");
getchar();
__fpurge(stdin);
}

}


void delete_student()
{
int r,i,found;
char m;
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
for(i=0;i<number_of_students_added;i++)
{
if(s[i].roll_number==r)
{
found=1;
break;
}
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
printf("DELETE Y/N : ");
m=getchar();
__fpurge(stdin);
if(m=='y' || m=='Y')
{
while(i<number_of_students_added)
{
s[i].roll_number=s[i+1].roll_number;
strcpy(s[i].name,s[i+1].name);
i++;
}
number_of_students_added--;
printf("roll number deleted, press enter key to contnue...........");
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
for(i=0;i<number_of_students_added;i++)
{
if(s[i].roll_number==r)
{
found=1;
break;
}
}
if(found==0)
{
printf("Roll number not found, press enter key to continue..........");
getchar();
__fpurge(stdin);
return ;
}
printf("roll number (%d) is allotted to : (%s) , press enter key to continue..........",r,s[i].name);
getchar();
__fpurge(stdin);
}


void display_list_of_student()
{
int i;
if(number_of_students_added==0)
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
for (i=0;i<number_of_students_added;i++)
{
printf("%4d %10d    %s\n",i,s[i].roll_number,s[i].name);
}
printf("enter key to continue..............");
getchar();
__fpurge(stdin);
}
