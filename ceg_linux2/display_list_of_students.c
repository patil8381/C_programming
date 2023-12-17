#include<stdio.h>
#include<string.h>

int main()
{
struct _IO_FILE *f;
char name[27];
char roll_number[12];

f=fopen("students.sd","r");
if(f==NULL)
{
printf("No students added\n");
return 0;
}

while(1)
{
fgets(roll_number,12,f);
if(feof(f)) break;
fgets(name,27,f);
roll_number[strlen(roll_number)-1]='\0';
name[strlen(name)-1]='\0';
printf("%s %s\n",roll_number,name);
}
fclose(f);

return 0;
}
