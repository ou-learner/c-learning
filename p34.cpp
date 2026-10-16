#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	for(int i=0;i<4;i++)
	{
		a=0;b=0;c=0;d=0;
		
		if(i==0)a=1;
		if(i==1)b=1;
		if(i==2)c=1;
		if(i==3)d=1;
		
		int a_s1=(b==0);
		int a_s2=(d==1);
		if(a_s1!=a_s2)
		continue;
		
		int b_s1=(b==0);
		int b_s2=(c==1);
		if(b_s1!=b_s2)
		continue;
		
		int c_s1=(a==0);
		int c_s2=(b==1);
		if(c_s1!=c_s2)
		continue;
		
		if(a==1)printf("¼×ÊÇÇÔÔô\n");
		if(b==1)printf("ÒÒÊÇÇÔÔô\n");
		if(c==1)printf("±ûÊÇÇÔÔô\n");
		if(d==1)printf("¶¡ÊÇÇÔÔô\n");
	}
	return 0;
}
