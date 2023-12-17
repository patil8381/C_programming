#include<stdio.h>

enum DIFFICULTY_LEVEL{EASY,MEDIUM,HARD};

void take_test(enum DIFFICULTY_LEVEL level)
{
if(level==EASY) printf("logic to print EASY questions\n");
if(level==MEDIUM) printf("logic to print MEDIUM questions\n");
if(level==HARD) printf("logic to print HARD questions\n");
}

int main()
{
take_test(EASY);

return 0;
}
