int main()
{
int x[4][3];
int j;	
j=x;	// x represents a collection hence will become &x[0]
	// incorrect, &x[0] is of type int (*)[3] and j is of type int 
j=x[0];	// x represents a collection hence will become &x[0][0]
	// incorrect, hence &x[0][0] is of type int * and j is of type int 
j=x[0][0];	// correct , x[0][0] is of type int and j is of type int 
j=&x;	// incorrect, &x is of type int (*)[4][3] and j is of type int 

return 0;
}