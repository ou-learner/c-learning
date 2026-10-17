#include <stdio.h>

int main()
{
	int N,N1,t,i;
	for(N=1000;N<1111;N++)
	{
		for(t=N,i=1,N1=0;i<=4;i++)
		{
			N1=N1*10+t%10;
			t/=10;
		}
		if(N*9==N1)
		{
			printf("一个四位数，它的9倍是其反序数，该数为%d\n",N);
		}
	}
	return 0;
  }  
