#include <stdio.h>
double s,v;
void val(double,double,double);

int main()
{
	double l,w,h;
	printf("请输入长方体的长 宽 高\n");
	scanf("%lf %lf %lf",&l,&w,&h);
	
	val(l,w,h);
	printf("表面积：%.2f\n",s);
	printf("体积：%.2f\n",v);
	
	return 0;
}
void val(double l,double w,double h)
{
	s=(l*w+l*h+h*w)*2;
	v=l*w*h;
}
