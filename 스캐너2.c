#include <stdio.h>
/**
������ ������ ������ ���ϴ� ���α׷� 
**/
int main(void)
{
	int i,x,num,sum=0;
	printf("���� ������ ������ �Է��ϼ���. :\n");
	scanf("%d",&num);
	getchar();
	for(i=0;i<num;i++) {
		printf("���� ������ �Է��ϼ���. :\n");
		scanf("%d",&x);
		getchar();
		sum+=x;
	}
	printf("�Է��� ������ �� ���� %d�Դϴ�.",sum);
 } 
