#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	
	printf("输入一行字符\n"); 
	fgets(str,1000,stdin);
	str[strcspn(str,"\n")]='\0';
	int len=strlen(str);
	
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(str[i]<str[j])
			{
				char temp;
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("降序后：%s",str);
	return 0;
 } 
