#include <stdio.h>
/**
c���� ���������� false���� 0����, �� ���� ���� ���� true�� �����ϰ��ִ�. 
**/
int main(void)
{
	int x = 50;
	int y = 60;
	printf("x�� y�� ������? ���� %d�̴�.\n", x==y);	
	y-=10;
	printf("x�� y�� ������? ���� %d�̴�.", x==y);	
	return 0;
}
