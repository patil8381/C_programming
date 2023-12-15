#include<stdio.h>
int main()
{
int p,c,m,h,e,count,total,percent;

printf("Enter marks of Physics(0-100) : ");
scanf("%d",&p);
if(p<0 || p>100)
{
printf("Invalid Input/\n");
return 0;
}

printf("Enter marks of chemistry(0-100) :");
scanf("%d",&c);
if(c<0 || c>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter marks of Maths(0-100) : ");
scanf("%d",&m);
if(m<0 || m>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter marks of Hindi(0-100) : ");
scanf("%d",&h);
if(h<0 || h>100)
{
printf("Invalid Input.\n");
return 0;
}

printf("Enter marks of English(0-100) : ");
scanf("%d",&e);
if(e<0 || e>100)
{
printf("Invalid Input/\n");
return 0;
}


count=0;
if(p<33)
{
count++;
}
if(c<33)
{
count++;
}
if(m<33)
{
count++;
}
if(h<33)
{
count++ ;
}
if(e<33)
{
count++;
}


if(count==0)
{
printf("Result : Pass\n");
total = p+c+m+h+e;
percent = total/5;
printf("Total marks are : %d\n",total);
printf("Percentage : %d\n",percent);
if(percent>=60)
{
printf("First Divsion.\n");
}
else
{
if(percent>=45 || percent<60)
{
printf("Second Division.\n");
}
else
{
printf("Third Division.\n");
}
}

}
else
{
if(count==1)
{

if(p>=30 && p<33)
{
int g;
g=0;
p=p+1;
g++;
if(p==33)
{
printf("Passed with grace of %d marks in physics.\n",g);
return 0;
}
else
{
p=p+1;
g++;
if(p==33)
{
printf("Passed with grace of %d marks in physics.\n",g);
return 0;
}
else
{
p=p+1;
g++;
printf("Passed with grace of %d marks in physics.\n",g);
return 0;
}
}

}


if(c>=30 && c<33)
{
int g;
g=0;
c+=1;
g++;
if(c==33)
{
printf("Passed with grace of %d in chemistry.\n",g);
return 0;
}
else
{
c+=1;
g++;
if(c==33)
{
printf("Passed with grace of %d in chemistry.\n",g);
return 0;
}
else
{
printf("Passed with grace of %d in chemistry.\n",g);
return 0;
}

}

}


if(m>=30 && m<33)
{
int g=0;
m+=1;
g++;
if(m==33)
{
printf("Passed with grace of %d in Maths.\n",g);
return 0;
}
else
{
m+=1;
g++;
if(m==33)
{
printf("Passed with grace of %d in Maths.\n",g);
return 0;
}
else
{
g++;
m+=1;;
printf("Passed with grace of %d in Maths.\n",g);
return 0;
}

}

}


if(h>=30  && h<33)
{
int g=0;
h++;
g++;
if(h==33)
{
printf("Passed with grace of %d in Hindi.\n",g);
return 0;
}
else
{
h++;
g++;
if(h==33)
{
printf("Passed with grace of %d in Hindi.\n",g);
return 0;
}
else
{
h++;
g++;
printf("Passed with grace of %d in Hindi.\n",g);
return 0;
}

}

}

if(e>=30 && e<33)
{
int g=0;
e++;
g++;
if(e==33)
{
printf("Passed with grace of %d in English.\n",g);
return 0;
}
else
{
e++;
g++;
if(e==33)
{
printf("Passed with grace of %d in English.\n",g);
return 0;
}
else
{
e++;
g++;
printf("Passed with grace of %d in English.\n",g);
return 0;
}

}



}




else
{
printf("Suppli\n");
}

}
else
{
printf("Result : Fail.\n");
}

}



return 0;
}
