#include<stdio.h>
#define CLUB_IT(a,b,c,d) a##b##c##d
// club_it will do a+b+c+d
//
int main()
{
int p=10;
int q=20;
int r=30;
int s=40;
int pqrs=p+q+r+s;

printf("%d\n",CLUB_IT(p,q,r,s)); // printf("%d",p+q+r+s);


return 0;
}
