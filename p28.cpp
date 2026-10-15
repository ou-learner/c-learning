#include <stdio.h>

int main()
{
	double average,sum=0;
	double height[10];
	
	printf("输入10个战士的身高(米)\n");
	for(int i=0;i<10;i++)
	{
		scanf("%lf",&height[i]);
		sum+=height[i];	
	 } 
	average=sum/10.0;
	printf("平均身高：%.2f米\n",average);
	
	printf("低于平均身高的为：");
	
	double tallest=height[0];
	double shortest=height[0]; 
	for(int i=0;i<10;i++)
	{
		if(height[i]<average)
		printf("%.2f米 ",height[i]);
		
		if(height[i]>tallest)
		tallest=height[i];
		
		if(height[i]<shortest)
		shortest=height[i];
	 } 
	 printf("\n其中最高的为：%.2f米",tallest);
	 printf("\n其中最低的为：%.2f米",shortest);
	  
	 return 0; 
 } 

