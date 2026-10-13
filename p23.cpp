#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,delta;
	printf("解一元二次方程ax^2+bx+c=0的实数根,输入a b c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a==0)
	{
		printf("a不能为0\n");
		return 0;
	 } 
	 
	delta=b*b-4*a*c;
	if(delta>=0)
	{
		double x1=(-b+sqrt(delta))/(2*a);
		double x2=(-b-sqrt(delta))/(2*a);
		printf("x1 = %f, x2= %f\n",x1,x2);
	 } 
	 else
	 printf("无实数根\n");
	 
	 return 0;
}
