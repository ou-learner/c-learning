#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	int count=0;
	
	printf("请输入一行字符\n");
	while((ch=getchar())!='\n'&&(ch!=EOF))
	{
		if(isalpha(ch))
		{
			count++;
		}
	}
	printf("共%d个字母\n",count);
	return 0; 
 } 
