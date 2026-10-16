#include <stdio.h>

int main()
{
	int n;
	double sum=0.0;
	scanf("%d",&n); 
	if(n<=0)
	{
		printf("ÊäÈëÕýÊý\n");
		return 0;
	}
	if(n%2==0)
	{
		for(int i=2;i<=n;i+=2)
		{
			sum+=1.0/i;
		}
		printf("%f\n",sum);
	}
	else
	{
		for(int i=1;i<=n;i+=2)
		{
			sum+=1.0/i;
		}
		printf("%f\n",sum);
	}
	return 0;
}
