#include <stdio.h>

int main()
{
	int n;
	for(int i=1;i<1000;i++)
	{
		n=i*7;
		if(n%6==5&&n%5==4&&n%3==2&&n%2==1)
		{
			printf("%d\n",n);
			break; 
		}
	}
	return 0;
}
