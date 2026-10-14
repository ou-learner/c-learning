#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];
	
	printf("请输入两个字符串\n");
	fgets(a,100,stdin);
	a[strcspn(a,"\n")]='\0';
	fgets(b,100,stdin);
	b[strcspn(b,"\n")]='\0';
	
	int len_a=strlen(a);
	int len_b=strlen(b);
	if(len_a<=len_b)
	printf("较短的字符串是%s，长度是%d\n",a,len_a);
	else
	printf("较短的字符串是%s，长度是%d\n",b,len_b);
	
	return 0;
 } 
