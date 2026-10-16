#include <stdio.h>

int main()
{
	double sum=0.0;
	double sign=1.0;
	for(int i=1;i<=100;i++)
	{
		sum+=sign*i/(i+1.0);
		sign*=-1.0;	
	}
	printf("%f",sum);
	
	return 0;
 } 
