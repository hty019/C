#include <stdio.h>
/**
�� ������ ���� ���� �ٲٴ� ������ �Լ� 
**/
void swap(int *x, int *y)
{
	int temp;
	temp =*x;
	*x=*y;
	*y=temp;
}
int main(void){
	int x=2;
	int y=1;
	swap(&x,&y);//�� �κ��� �����ΰ� ����. �ܼ��� ���� �ű�� ������ �ƴ϶�, ������ �ּ� ��ȯ 
	//x, y�� ������ ���� ���� �ƴ϶�, &x,&y���߸� �ϴ� ������ ���� ���̴�. 
	printf("x=%d\ny=%d",x,y);
	return 0;
	
}
