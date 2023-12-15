int main()
{
int *p;		// p is now capable of storing address whose data type is int 
int x[5];
p=&x[0];	// corrct , No issues P is of type int * and &x is of type int *

p=&x;		// p is of type int * and &x is of type     int (*)[5]
return 0;
}