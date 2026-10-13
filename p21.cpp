#include <stdio.h>
int data(int);

int main()
{
	printf("三位数的素数： ");	
	for(int x=100;x<1000;x++)
	{
		if(data(x)==1)
		printf("%d ",x);	
	}
	return 0;
 } 
 
int data(int x)
 {
 	if(x<2)
 	return 0;
 	
 	for(int i=2;i*i<=x;i++)
 	{
 		if(x%i==0)
 		{
 			return 0;
		 }
	 }
	 return 1;
}
