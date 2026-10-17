#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int count=0;
	printf("请输入一行英文单词\n"); 
	fgets(str,1000,stdin);
	str[strcspn(str,"\n")]='\0';
	
	int len=strlen(str);
	int in_word=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			in_word=0;	
		}else if(in_word==0)
		{
			count++;
			in_word=1;
		}
	}
	printf("有%d个英文单词\n",count);
	return 0;
}
