#include <stdio.h>
#define FLOOR 10
/**
�Ƕ�̵� ����� 
for ���� �� ��, c������ ������ �̸� ������ �� �����ؾ��Ѵ�. 
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
			printf("��");
		}
		printf("\n");
	}
	
} 
