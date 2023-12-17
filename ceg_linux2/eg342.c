#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

struct Member
{
long id;
char name[26];
char gender;
char city[21];
};

void add_member()
{
printf("STUDENT ADD MODULE \n");
printf("--------------------------\n");

struct Member m;
char confirm;

long ii;
char nn[27];
char gg;
char cc[22];

FILE *f;

printf("Enter id: ");
scanf("%ld",&ii);
__fpurge(stdin);
printf("Enter name : ");
fgets(nn,27,stdin);
nn[strlen(nn)-1]='\0';
__fpurge(stdin);

printf("Enter gender : ");
gg=getchar();
__fpurge(stdin);

printf("enter city : ");
fgets(cc,22,stdin);
__fpurge(stdin);
cc[strlen(cc)-1]='\0';

printf("Add Y/N : ");
confirm = getchar();
__fpurge(stdin);


if(confirm != 'y' && confirm !='Y')
{
printf("member not added\n");
return ;
}

m.id=ii;
strcpy(m.name,nn);
m.gender=gg;
strcpy(m.city,cc);

f=fopen("members.data","ab");
fwrite(&m,sizeof(struct Member),1,f);
fclose(f);
printf("Member added\n");

}

void display_member()
{
printf("STUDENT DISPLAY MODULE\n");
printf("----------------------\n");

struct Member m;
FILE *f;
int serial_number=0;

f=fopen("members.data","rb");
if(f==NULL)
{
printf("data file missing\n");
return ;
}

while(1)
{
fread(&m,sizeof(struct Member),1,f);
if(feof(f)) break;
serial_number++;
printf("%3d %18ld %-25s %c %-20s\n",serial_number,m.id,m.name,m.gender,m.city);
}
fclose(f);
if(serial_number==0)
{
printf("No records\n");
}

}

int main()
{
int choice ;

do
{
printf("------------------\n");
printf("	Menu\n");
printf("--------------------\n");
printf("1. Add Member\n");
printf("2. Display Member\n");
printf("3. Exit\n");

printf("Enter your choice : ");
scanf("%d",&choice);
__fpurge(stdin);

if(choice==1) add_member();
if(choice==2) display_member();

if(choice<1 || choice >3)
{
printf("please enter valid Input\n");
continue;
}

}while(choice!=3);

return 0;
}
