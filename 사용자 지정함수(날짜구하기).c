#include <stdio.h>
/**
1�� 1�Ϻ��� ������¥���� �ɸ��� �� ���� ���ϴ� ���α׷� 
c���� ����� ���� �Լ��� main�Լ����� ���� ���Եȴ�. 
**/
int getDays(int months, int days)
{ int i;
	for(i=1;i<months;i++)
	{
		if(i==2)
		{
			days+=28;
		}
		else if(i%2==0)
		{
			days+=30;
		}
		else {
			days+=31;
		}	
	}
	return days;
}
int main(void) 
{
	int months, days;
	printf("��¥(�� ��)�� �Է��ϼ���. : ex)3 8\n");
	scanf("%d %d",&months,&days);
	getchar();
	printf("1��1�Ϻ��� �ش� ��¥���� �ɸ��� �� ���� %d�̴�.", getDays(months, days));
	return 0; 
}

