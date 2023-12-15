#include<stdio.h>
int main()
{
int p,c,m,h,e,count,total,percent;
count=0;

printf("Enter marks of Physics : ");
scanf("%d", &p);
if(p<0 || p>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter chemistry marks : ");
scanf("%d",&c);
if(c<0 || c>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter maths marks : ");
scanf("%d",&m);
if(m<0 || m>100)
{
printf("Invalid Input.\n");
return 0;
}


printf("Enter Hindi marks : ");
scanf("%d",&h);
if(h<0 || h>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter english marks : ");
scanf("%d",&e);
if(e<0 || e>100)
{
printf("Invalid Input.\n");
return 0;
}



if(p<33)
{
count=count+1;
}
if(c<33)
{
count=count+1;
}
if(m<33)
{
count=count+1;
}
if(h<33)
{
count=count+1;
}
if(e<33)
{
count=count+1;
}



if(count==0)
{
printf("Result : Pass.\n");
total = p+c+m+h+e;
percent=total/5;
printf("Total marks : %d\n",total);
printf("Percetage : %d\n",percent);
if(percent>=60)
{
printf("First Division.\n");
}
else
{
if(percent>=45 || percent<60)
{
printf("Second Division.\n");
}
else
{
printf("Third Divsion.\n");
}
}

}
else
{
if(count==1)
{
printf("Result : Suppli.\n\n");
}
else
{
printf("Result : Fail.\n\n");
}
}




return 0;
}