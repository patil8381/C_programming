#include<stdio.h>
int main(int c,char *v[])
{
struct _IO_FILE *k;
char *name;
char *contact_number;
int i;
if(c<3)
{
printf("Usage : add_friend.out 'name' 'contact_number'\n");
return 0;
}
name = v[1];
contact_number=v[2];

// 	k=fopen("friends.fd","w");	// w mode always creates a new file 
k=fopen("friends.fd","a");	

for(i=0;name[i]!='\0';i++)
{
if(name[i]=='!')
{
printf("Invalid data. ! not allowed in name.\n");
return 0;
}
}
if(i>25) 
{
printf("name cannot exceed 25 characters\n");
return 0;
}
for(i=0;contact_number[i]!='\0';i++)
{
if(contact_number[i]=='!')
{
printf("Invalid data. ! not allowed in contact_number.\n");
return 0;
}
}

if(i>25) 
{
printf("name cannot exceed 25 characters\n");
return 0;
}


i=0;
while(name[i]!='\0')
{
fputc(name[i],k);
i++;
}
fputc('!',k);
i=0;
while(contact_number[i]!='\0')
{
fputc(contact_number[i],k);
i++;
}
fputc('!',k);

fclose(k);
printf("friend added\n");
return 0;
}
