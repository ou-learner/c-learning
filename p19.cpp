#include <stdio.h>

int main()
{
	int i=0;
	int flag=1;
	char str[1000];
	
	printf("输入一个字串\n");
	while((str[i]=getchar())!='\n')
	{
		i++;
	}
	
	if(i==0)
	{
		printf("不是字符串\n");
		return 0;
	}
	
	int left=0;
	int right=i-1; 
	while(left<right)
	{
		if(str[left]!=str[right])
		{
			flag=0;
			break;
		}
		left++;
		right--;
	}

	if(flag==1)
		printf("是对称串\n");
	else
		printf("不是对称串\n");
	
	return 0;
 } 
