#include <stdio.h>
/**
����Լ�(Reculsive function) 
**/
void paint(int count)
{	if(count==0){
		return;
	}
	printf("���ڿ��� ����մϴ�.\n");
	count--;
	paint(count); 
}

int main(void)
{	int count;
	printf("����� ���ڿ��� ������ �Է��ϼ���. :");
	scanf("%d",&count);
	getchar();
	paint(count);
}
