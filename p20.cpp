#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 200
int main()
{
	srand((unsigned)time(NULL));
	char alpha;
	int i=0;
	int count=0;
	
	while(i<N)
	{
		alpha='A'+rand()%26;
		printf("%c ",alpha);
		i++;
		if(alpha=='A'||alpha=='E'||alpha=='I'
		||alpha=='O'||alpha=='U')
		{
			count++;
		}
	}
	printf("\n%d¸öÔªÒô×Ö·û\n",count);
	
 	return 0;
 } 
