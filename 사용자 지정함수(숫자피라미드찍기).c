#include <stdio.h>
/**
반복함수를 이용해서 숫자피라미드를 출력합니다. 
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
	printf("피라미드의 층 수를 입력하세요. :\n");
	scanf("%d",&num);
	getchar();
	paint(num);
}
