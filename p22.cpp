#include <stdio.h>
void satr(int);

int main()
{
	int n,m;
	printf("打印 行 列的矩形\n");
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		satr(m);
		printf("\n");
	}
	return 0; 
 } 
 
 void satr(int m)
 {
 	for(int j=0;j<m;j++)
	{
		printf("#");
	}
 }
