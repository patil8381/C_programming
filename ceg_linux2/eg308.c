#include<stdio.h>

typedef enum __DIFFICULTY_LEVEL
{
EASY,
MEDIUM,HARD
}DIFFICULTY_LEVEL;

int is_valid_difficulty_level(DIFFICULTY_LEVEL level)
{
switch(level)
{
case EASY:
case MEDIUM:
case HARD:
return 1;	// 1 for true
default:
return 0;	// 0 for false
}
}

void take_test(DIFFICULTY_LEVEL level)
{
if(!is_valid_difficulty_level(level))
{
printf("Invalid difficulty level\n");
return ;
}

if(level==EASY) printf("logic to print EASY questions\n");
if(level==MEDIUM) printf("logic to print MEDIUM questions\n");
if(level==HARD) printf("logic to print HARD questions\n");
}

int main()
{
take_test(EASY);

take_test(54);

return 0;
}
