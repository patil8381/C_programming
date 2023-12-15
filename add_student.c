#include<stdio.h>
#include<string.h>

void create_student();
void update_student();
void delete_student();
void search_student();
void display_student();

int roll_number[20];
char name[20][30];
int total_students=0;


int main()
{
int choice;
char m;

do
{
printf("----------------------------\n");
printf("	MENU	\n");
printf("----------------------------\n");
printf("print 1 to Add student.\n");
printf("print 2 to update student.\n");
printf("print 3 to search student.\n");
printf("print 4 to delete student.\n");
printf("print 5 to display list of student.\n");
printf("print 6 to EXIT.\n");

printf("Enter your choice : ");
scanf("%d",&choice);

while((m=getchar())!='\n' && m!=EOF) ;	//clearing stdin buffer 

if(choice <=0 || choice >6 )
{
printf("Invalid Input.\n");
continue;
}

if(choice == 1 )
{

if(total_students==20)
{
printf("data of 20 students added you cannot add more, \n");
return 0;
}
else create_student();

}
if(choice == 2 )
{
update_student();
}
if(choice == 3 )
{
delete_student();
}
if(choice == 4 )
{
search_student();
}
if(choice == 5 )
{
display_student();
}


}while(choice != 6);

return 0;
}

//-----------------------------------------------------

void create_student()
{
int r,i;
char n[32];
char m;

printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF) ;

if(r<=0) 
{
printf("Invalid roll number \n");
return ;
}
i=0;
while(i<=total_students)
{
if(roll_number[i]==r)
{
printf("that roll number already exist ,");
return ;
}
}

roll_number[i]=r;
printf("Enter a name : ");
fgets(n,32,stdin);
while((m=getchar())!='\n' && m!=EOF) ;

strcpy(name[i],n);
printf("stduent added.\n");
total_students++;
}


//--------------------------------------------------------


void update_student()
{
int r,i;
char n[32];
char m;

printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF) ;

if(r<=0) 
{
printf("Invalid roll number \n");
return ;
}
i=0;
while(i<=total_students)
{
if(roll_number[i]==r)
{
printf("Enter a name : ");
fgets(n,32,stdin);
while((m=getchar())!='\n' || m!=EOF) ;
if(strcmp(name[i],n)==0)
{
printf("name is same as before");
return ;
}

strcpy(name[i],n);
}
}

}


//--------------------------------------------------------


void search_student()
{
int r,i;
char n[32];
char m;

printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF) ;

if(r<=0) 
{
printf("Invalid roll number \n");
return ;
}

for(i=0;i<=total_students;i++)
{
if(roll_number[i]==r)
{
printf("name : %s\n",name[i]);
break;
}
}
}

//--------------------------------------------------------


void display_student()
{
int r,i;
char n[32];
char m;

printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF) ;

if(r<=0) 
{
printf("Invalid roll number \n");
return ;
}

for(i=0;i<=total_students;i++)
{
printf("Roll Number name\n");
printf("%6d  %s\n");
}



}

//--------------------------------------------------------


void delete_student()
{
int r;
char n[32];

int i,found;
char m;

printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF) ;

if(r<=0) 
{
printf("Invalid roll number \n");
return ;
}

found=0;
for(i=0;i<=total_students;i++)
{
if(roll_number[i]==r)
{
found=1;
break;
}
}

if(found==0)
{
printf("roll number not found");
return ;
}

if(found==1)
{

while(i<total_students)
{
roll_number[i]=roll_number[i+1];
strcpy(name[i],name[i+1]);
i++;
}


}

}
