#include<stdio.h>
int main()
{
char j[5];
int i;
FILE *f;
f=fopen("data332.d","rb");
if(f==NULL)
{
printf("data332.d missing \n");
return 0;
}

fread(&j,sizeof(j[0]),5,f);

if(feof(f)) 
{
printf("data 332.d does not contain necessaty data\n");
return 0;
}

fclose(f);

for(i=0;i<=4;i++) 	printf("%d\n",j[i]);
printf("%d\n",j[0]);
printf("%d\n",j[1]);
printf("%d\n",j[2]);
printf("%d\n",j[3]);
printf("%d\n",j[4]);
return 0;
}
