#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000],b[1000];
	printf("ÇëÊäÈëÁ½¸ö×Ö·û´®\n");
	fgets(a,1000,stdin);
	a[strcspn(a,"\n")]='\0';
	fgets(b,1000,stdin);
	b[strcspn(b,"\n")]='\0';
	
	if(strlen(a)<=strlen(b))
	{
		strcat(b,a);
		printf("%s\n",b);
	}
	else
	{
		strcat(a,b);
		printf("%s\n",a);
	}
	 return 0;	
}
