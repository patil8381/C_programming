#include<stdio.h>
struct abc
{
int x,y;
char m;
};

int main()
{
struct abc rr,tt;
printf("%lu\n",(sizeof(struct abc)));
rr.x=10;
rr.y=20;
rr.m='A';
printf("Enter a number :");
scanf("%d",&tt.x);
tt.y=tt.x+10;
tt.m='Z';
printf("%d %d %c\n",rr.x,rr.y,rr.m);
printf("%d %d %c\n",tt.x,tt.y,tt.m);

return 0;
}
