#include <stdio.h>
/**
�ݺ��Լ��� �̿��ؼ� �����Ƕ�̵带 ����մϴ�. 
**/
void paint(int floor)
{int i,j;
	for(i=floor;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<floor-i;j++)
		{
			printf("%d",j);
		}
		for(j=floor-i;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
int main(void)
{ int num;
	printf("�Ƕ�̵��� �� ���� �Է��ϼ���. :\n");
	scanf("%d",&num);
	getchar();
	paint(num);
}
