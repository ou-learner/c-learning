#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,l,s1,s2,temp;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		l=(a>b)?a:b;
		s1=a+b-l;
		temp=l; 
		l=(l>c)?l:c;
		s2=temp+c-l; 
	 
		if(fabs(s1*s1+s2*s2-l*l)<1e-6)
		printf("是直角三角形\n");
		else
		printf("不是直角三角形\n");
	}
	else
	printf("不是三角形\n");
	
	return 0;
 } 
