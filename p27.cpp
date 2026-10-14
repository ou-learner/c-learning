#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 20
void line(int a[]); 

int main()
{
	srand((unsigned)time(NULL));
	int i;
	int a[N];
	for(i=0;i<N;i++)
	{
		a[i]=rand()%90+10;
		printf("%d ",a[i]);
	}
	line(a);
	printf("\n½µÐòÅÅÁÐ£º") ;
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void line(int a[])
{
	int k=0;
	int l=1;
	int temp;
	for(;k<N-1;k++)
	{
		for(l=k+1;l<N;l++) 
		{
			if(a[k]<a[l])
			{	
			temp=a[k];
			a[k]=a[l];
			a[l]=temp;
			}
		}
	}
}
