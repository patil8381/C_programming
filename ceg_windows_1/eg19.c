#include<stdio.h>
int main()
{
int e,f,g;
g=3;
while(g>=0)
{
e=0;
f=1;
while(e<=g)
{
printf("%d %d\n",e,f);
e++;
f++;
}
g--;

}



return 0;
}