int main()
{
int x,y;
int z;
x=10;
y=30;
z=50;
z=x;

z=&x;
z=&y;
x=&z;

return 0;
}