#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 int main()
 {
 	char str[100];
 	fgets(str,100,stdin);
 	str[strcspn(str,"\n")]='\0';
 	
 	int len=strlen(str);
 	for(int i=0;i<len;i++)
 	{
 		if(islower(str[i]))
 		str[i]=toupper(str[i]);
 		else if(isupper(str[i]))
 		str[i]=tolower(str[i]);
	 }
	 printf("%s\n",str);
	 return 0;
 }
