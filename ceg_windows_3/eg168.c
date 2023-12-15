// object to count words if  ' ' , ',' , ';' , ':' , '.'
// now ' ' '.'

#include<stdio.h>
int count_words(char *,char *,int);
int is_seperators(char,char *,int);
int main()
{
char a[101];
char seperators[]={' ',',','.',';'};
int size_of_set;
size_of_set=sizeof(seperators)/sizeof(seperators[0]);

int count;
printf("Enter a String : ");
scanf("%[^\n]",a);
printf("String is (%s)\n",a);
count=count_words(a,seperators,size_of_set);
printf("Number of words are : (%d)\n",count);

return 0;
}

int is_seperators(char m,char *seperators,int size_of_seperators_set)
{
int x;

for(x=0;x<size_of_seperators_set;x++)
{
if(m==seperators[x])
{
return 1;
}
}

return 0;
}

int count_words(char *str,char *seperators,int size_of_seperators_set)
{
int x;
int seperators_count=0;

if(str == NULL || seperators == '\0' || size_of_seperators_set <= 0 || *str == '\0')
{
return 0;
}

while(is_seperators(*str,seperators,size_of_seperators_set)==1)
{
str++;
}


while(*str != '\0')
{
if(is_seperators(*str,seperators,size_of_seperators_set)==1)
{
seperators_count++;
while(is_seperators(*str,seperators,size_of_seperators_set)==1)
{
str++;
}
}
else
{
str++;
}

}

if(is_seperators(*str,seperators,size_of_seperators_set)==1)
{
seperators_count--;
}

return seperators_count+1;
}




/*
--------------------------------------------------------------------------------------------------------------
// HARD-CODED  

int count_words(char *str)
{
int x;
int words=0;
char b[5]={' ','.'};
if(*str == '\0')
{
return 0;
}

while(*str == ' ' || *str == ',' || *str == ';' || *str == ':' || *str == '.')
{
str++;
}


while(*str != '\0')
{
if(*str == ' ' || *str == ',' || *str == ';' || *str == ':' || *str == '.')
{
words++;
while(*str == ' ' || *str == ',' || *str == ';' || *str == ':' || *str == '.')
{
str++;
}
}
else
{
str++;
}

}

if(*(str-1) == ' ' || *(str-1) == ',' || *(str-1) == ';' || *(str-1) == ':' || *(str-1) == '.')
{
words--;
}

return words+1;
}

*/