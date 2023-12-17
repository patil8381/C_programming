#include<stdio.h>
#include<string.h>

int main(int c,char *v[])
{
struct _IO_FILE *f;
char *name;
char *roll_number;

char rr[12]; // rr for roll number and 1 extra for \n and 1 for \0
char nn[27]; // nn for name and 1 extra for \n and 1 for \0
	     
int i;
if(c<3)
{
printf("Usage: add_student 'roll_number' 'name'\n");
return 0;
}

roll_number=v[1];
name=v[2];

// code to chec if \n is not in the roll number
for(i=0;roll_number[i]!='\0';i++)
{
if(roll_number[i]=='\n')
{
printf("Invalid data. \\n is not allowed in roll_number\n");
return 0;
}
//or the above is not requred if we use the following 
if(roll_number[i]<48 || roll_number[i]>57) 
{
printf("Invalid data. roll number should be a number\n");
return 0;
}
}
//code to check the roll number does not exceed 10 char limit 
if(i>10)
{
printf("Invalid data. roll number cannot exceed 10 chars\n");
return 0;
}

// code to chec if \n is not in the roll number
for(i=0;name[i]!='\0';i++)
{
if(name[i]=='\n')
{
printf("Invalid data. \\n is not allowed in name\n");
return 0;
}
}
//code to check the name does not exceed 27 char limit 
if(i>25)
{
printf("Invalid data. name cannot exceed 25 chars\n");
return 0;
}
// code to check duplicacy 
f=fopen("students.sd","r");
if(f!=NULL)
{
while(1)
{
fgets(rr,12,f);
if(feof(f)) break;
fgets(nn,27,f);
rr[strlen(rr)-1]='\0';
nn[strlen(nn)-1]='\0';

if(strcmp(rr,roll_number)==0)
{
printf("roll number already exists.\n");
fclose(f);
printf("student not added\n");
return 0;
}

}

}
fclose(f);
// code to append data in file 
f=fopen("students.sd","a");
fputs(roll_number,f);
fputc('\n',f);
fputs(name,f);
fputc('\n',f);

fclose(f);
printf("student added\n");

return 0;
}
