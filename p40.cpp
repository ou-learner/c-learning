#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[100];
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(islower(str[i]))
		{
			if(str[i]>='y')
			str[i]-=24;
			else 
			str[i]+=2; 
		}
	}
	printf("%s\n",str);
	return 0;
}
