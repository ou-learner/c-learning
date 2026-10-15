#include <stdio.h>

int main()
{
	int x,y,z;
	for(x=0;x<33;x++)
	{
		for(y=0;y<50;y++)
		{
			z=100-x-y;
			if(x*3+y*2+z/3==100&&z%3==0)
			printf("¼¦ÎÌ%dÖ»£¬¼¦Ä¸%dÖ»£¬¼¦³û%dÖ»\n",x,y,z);
		}
	}
	return 0; 
}
