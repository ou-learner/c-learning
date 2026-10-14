#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];
	
	printf("请输入两个字符串\n");
	fgets(a,100,stdin);
	a[strcspn(a,"\n")]='\0';
	fgets(b,100,stdin);
	b[strcspn(a,"\n")]='\0';
	
	if(strcmp(a,b)==0) 
	printf("相同\n");
	else
	printf("不同\n");
	
	return 0;
}
