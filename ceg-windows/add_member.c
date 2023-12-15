#include<stdio.h>
#include<string.h>

void add();
void update();
void delete();
void search();
void display();

int roll_number[20];
char name[20][26];
int total_students=0;
int main()
{
int choice;
char m;

do 
{
printf("--------------------------\n");
printf("\tMenu\n");
printf("--------------------------\n");
printf("1. ADD MEMBER\n");
printf("2. UPDATE STUDENT\n");
printf("3. SEARCH STUDENT\n");
printf("4. DISPLAY STUDENT\n");
printf("5. DELETE STUDENT\n");
printf("6. EXIT\n");

printf("Enter your choice : ");
scanf("%d",&choice);
while((m=getchar())!='\n' && m!=EOF);

if(choice<=0 || choice>6)
{
printf("Invalid choice, press enter key to continue.....");
while((m=getchar())!='\n' && m!=EOF);
continue;
}

if(choice==1) add();
else if(choice==2) update();
else if(choice==3) search();
else if(choice==4) display();
else if(choice==5) delete();
}while(choice!=6);

return 0;
}

void add()
{
int r;
char n[27];
int i,found;
char m;
printf("--------------------------\n");
printf("	Add Module\n");
printf("--------------------------\n");
printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF);

if(r<=0) 
{
printf("Invalid roll number. press enter key to continue.....");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

for(i=0;i<total_students;i++)
{
if(roll_number[i]==r)
{
found=1;
break;
}
}

if(found==1)
{
printf("That roll number is already allotted to %s\n",name[i]);
printf("press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

printf("Enter name : ");
fgets(n,27,stdin);
n[strlen(n)-1]='\0';
printf("Are you sure : ");
m=getchar();
if(m=='y' || m =='Y')
{
roll_number[i]=r;
strcpy(name[i],n);
printf("Student data Added\n");
printf("press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);
total_students++;
}
else 
{
printf("Student not added \n");
}
}


void update()
{
int r;
char n[27];
int i,found;
char m;

printf("--------------------------\n");
printf("Update Module\n");
printf("--------------------------\n");
printf("Enter a roll number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF);

if(r<=0)
{
printf("Invalid roll number. press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

for(i=0;i<total_students;i++)
{
if(roll_number[i]==r)
{
found=1;
break;
}
}

if(found=1)
{
printf("Name : %s",name[i]);
printf("Update (Y/N) : ");
m=getchar();
if(m=='y' || m=='Y')
{
printf("Enter name : ");
fgets(n,27,stdin);
n[strlen(n)-1]='\0';
}
while((m=getchar())!='\n' && m!=EOF);

roll_number[i]==r;
strcpy(name[i],n);
printf("Student data Updated\n");
printf("press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);
return;
}

if(found=0)
{
printf("Data does not exists, press enter to continue........");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

}
void delete()
{
int r;
char n[27];
int i,found;
char m;

printf("--------------------------\n");
printf("Delete Module\n");
printf("--------------------------\n");
printf("Enter a roll Number : ");
scanf("%d",&r);
while((m=getchar())!='\n' && m!=EOF);

if(r<=0)
{
printf("Invalid roll number. press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

if(total_students==0)
{
printf("No Records at present \n");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

found=0;

for(i=0;i<total_students;i++)
{
if(roll_number[i]==r)
{
found=1;
break;
}

}

if(found=0)
{
printf("Data does not exists, press enter to continue........");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

while(i<total_students)
{
roll_number[i]=roll_number[i+1];
strcpy(name[i],name[i+1]);
i++;
}
printf("Student data deleted\n");
total_students++;
printf("press enter key to continue......");
while((m=getchar())!='\n' && m!=EOF);

}
void search()
{
int r;
int i,found=0;
char m;

printf("--------------------------\n");
printf("Search Module\n");
printf("--------------------------\n");
if(total_students==0) 
{
printf("No Records yet!\n");
return ;
}

for(i=0;i<total_students;i++)
{
if(roll_number[i]==r)
{
found=1;
break;
}
}

if(found=1)
{
printf("The roll number(%d) is allotted to (%s)\n",r,name[i]);
printf("press enter key to continue.......");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

printf("No records for that roll number, press enter to continue.....");
while((m=getchar())!='\n' && m!=EOF);
}

void display()
{
int i;
char m;

printf("--------------------------\n");
printf("Display Module\n");
printf("--------------------------\n");

if(total_students==0) 
{
printf("\tList of students\n");
printf("-------------------------------------\n");
printf("\tNo records.\n");
printf("-------------------------------------\n");
printf("press enter key to continue.....");
while((m=getchar())!='\n' && m!=EOF);
return ;
}

else
{
for(i=0;i<total_students;i++)
{
printf("\tList of students\n");
printf("-------------------------------------\n");
printf("S.No \tRoll Number \tName\n");
printf("%4d %10d %s",i,roll_number[i],name[i]);
}

}


}
