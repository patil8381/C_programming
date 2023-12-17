
struct Student 
{
int x,y;
char e,f;
};

int main()
{
int x=10;
char y='A';

struct Student s;

void *p;

p=&x;
p=&y;
p=&s;

return 0;
}
