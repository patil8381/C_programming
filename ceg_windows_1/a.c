#include<stdio.h>
int main()
{
int a,b,c,d,e,count,total,percent;
count=0;

printf("Enter marks of 5 subjects between 0-100 : \n");

scanf("%d", &a);
if(a>100)
{
printf("Enter a marks less than 100 between 0-100\n");
return 0;
}
if(a<0)
{
printf("Enter a marks greater than 0 between 0-100\n");
return 0;
}

scanf("%d",&b);
if(b>100)
{
printf("Enter b marks less than 100 between 0-100\n");
return 0;
}
if(b<0)
{
printf("Enter b marks greater than 0 between 0-100\n");
return 0;
}

scanf("%d",&c);
if(c>100)
{
printf("Enter c marks less than 100 between 0-100\n");
return 0;
}
if(c<0)
{
printf("Enter c marks greater than 0 between 0-100\n");
return 0;
}

scanf("%d",&d);
if(d>100)
{
printf("Enter d marks less than 100 between 0-100\n");
return 0;
}
if(d<0)
{
printf("Enter d marks greater than 0 between 0-100\n");
return 0;
}

scanf("%d",&e);
if(e>100)
{
printf("Enter e marks less than 100 between 0-100\n");
return 0;
}
if(e<0)
{
printf("Enter e marks greater than 0 between 0-100\n");
return 0;
}



if(a<33)
{
count=count+1;
}
if(b<33)
{
count=count+1;
}
if(c<33)
{
count=count+1;
}
if(d<33)
{
count=count+1;
}
if(e<33)
{
count=count+1;
}


if(count>1)
{
printf("Fail. ");
return 0;
}
else
{
if(count==1)
{
printf("suppli");
return 0;
}
else
{
total=a+b+c+d+e;
percent=total/5;
printf("Sum of  Total marks is %d\n",total);
printf("percent is %d\n",percent);

if(percent>60)
{
printf("First Division.\n");
}
else
{
if(percent>45)
{
printf("Second Division");
}
else
{
printf("Third Division");
}

}

}

}

printf("Total marks are : \n");
printf("a is %d\n",a);
printf("b is %d\n",b);
printf("c is %d\n",c);
printf("d is %d\n",d);
printf("e is %d\n",e);

return 0;
}