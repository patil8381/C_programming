#include<stdio.h>
#include<stdlib.h>

int main()
{
int *x,*g;
int i;
	
int collection_size=5;
x= (int *)malloc(collection_size*sizeof(int));
if(x==NULL)
{
printf("Memory not availabel \n");
return 0;
}
x[0]=75;
x[1]=80;
x[2]=10;
x[3]=20;
x[4]=30;
printf("collection of elements is follows \n");
for(i=0;i<collection_size;i++)
{
printf("%d\n",x[i]);
}

printf("changing the size of collection to %d elements\n",collection_size+5);

g=(int *)malloc((collection_size+5)*sizeof(int));
if(g==NULL) printf("Unavle to resize allocation \n");
else
{
for(i=0;i<collection_size;i++)
{
	g[i]=x[i];
}
free(x);

x=g;

collection_size=collection_size+5;
x[5]=20;
x[6]=125;
x[7]=225;
x[8]=358;
x[9]=452;

}
for(i=0;i<collection_size;i++)
{
printf("%d\n",x[i]);
}
	
free(x);
	
	
return 0;
}
