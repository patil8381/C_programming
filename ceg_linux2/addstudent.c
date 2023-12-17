// code to add student 
// and check duplicacy in name and roll number 

#include<stdio.h>
#include<string.h>

int main(int c,char *v[])
{
int i;
struct _IO_FILE *f;
char *roll_number;
char *name;
if(c<3)
{
printf("Usage : 'addstudent' 'roll_number' 'name'\n");
return 0;
}
char rr[12];
char nn[27];

roll_number=v[1];
name=v[2];

//code to check wether roll_number does not contain \n
for(i=0;roll_number[i]!='\0';i++)
{
if(roll_number[i]=='\n')
{
printf("Invalid data, cannot add '\\n' to roll_number");
return 0;
}
}
if(i>10)
{
printf("cannot exceed more than 10 characters\n");
return 0;
}
//code to check weather name does not contain \n 
for(i=0;name[i]!='\0';i++)
{
if(name[i]=='\n')
{
printf("Invalid data, name cannot contain '\\n' in name ");
return 0;
}
}
if(i>25)
{
printf("Invalid data, name cannot exceed 25 char's");
return 0;
}

//code to check duplicacy check 
f=fopen("student.own","r");
if(f!=NULL)
{
while(1)
{
fgets(rr,12,f);
if(feof(f)) break;
fgets(nn,27,f);
rr[strlen(rr)-1]='\0';
nn[strlen(nn)-1]='\0';
}
if(strcmp(rr,roll_number)==0)
{
printf("roll Number is already alloted to %s\n",nn);
fclose(f);
printf("student not added\n");
return 0;
}

}


// code to append data to the file
f=fopen("student.own","a");
fputs(roll_number,f);
fputc('\n',f);
fputs(name,f);
fputc('\n',f);

fclose(f);
printf("student added\n");

return 0;
}
