#include <stdio.h>

int main()
{
	int a,n;
	long long s=0,t=0;
	printf("求s=a+aa+aaa+aaaa+......+aa...a的值\n");
	printf("输入a(1~9),n(1~10)\na=");
	if(scanf("%d",&a)==1&&a>0&&a<=9)
	{
		printf("n=");
		if(scanf("%d",&n)==1&&n>0&&n<=10)
		{
			for(int i=1;i<=n;i++)
			{
				t=t*10+a;
				s+=t;
			}
		}
		printf("结果为%lld\n",s);
	}
	else 
	printf("输入错误");
	
	return 0; 
}
	
