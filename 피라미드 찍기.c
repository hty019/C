#include <stdio.h>
#define FLOOR 10
/**
피라미드 별찍기 
for 문을 쓸 때, c언어에서는 변수를 미리 정의한 후 대입해야한다. 
**/
int main(void)
{
	int i,j,k;
	for(i=0;i<FLOOR;i++)
	{
		for(j=1;j<FLOOR-i;j++)
		{
			printf("  ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("★");
		}
		printf("\n");
	}
	
} 
