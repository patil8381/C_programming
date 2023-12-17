#include<stdio.h>
#include<string.h>
struct Address
{
char line1[101];
char line2[101];
char name_of_city[51];
char name_of_country[51];
};

struct Student 
{
int roll_number;
char name[26];
struct Address address;
};

int main()
{
struct Student s;

s.roll_number=10;
strcpy(s.name,"Jethalal Gada");
strcpy(s.address.line1,"B 26/5 Gokuldham society");
strcpy(s.address.line2,"Powder gali");
strcpy(s.address.name_of_city,"Mumbai");
strcpy(s.address.name_of_country,"India");

printf("Student\n");
printf("---------------------\n");
printf("Roll Number : %d\n",s.roll_number);
printf("Name : %s\n",s.name);
printf("Address :\n");
printf("%s\n",s.address.line1);
printf("%s\n",s.address.line2);
printf("%s\n",s.address.name_of_city);
printf("%s\n",s.address.name_of_country);

return 0;
}
