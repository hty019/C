#include <stdio.h>
#include <stdlib.h>
/**
����ü(class�� ����) 
**/

struct student {
	int number;
	char name[10];
	double grade;	
}; 

int main(void)
{	
	struct student s;
	
	printf("�й� >");
	scanf("%d",&s.number);
	printf("�̸� >");
	scanf("%s",s.name);//���ڿ��� �� ��ü�� �����ͺ����� ���� ������ �ϹǷ� 
	//���� &�ּҸ� ������ �ʾƵ� �� ��ü�� �ּҷ� �νĵȴ�. 
	printf("���� >");
	scanf("%lf",&s.grade);//double �Է� ���� �� %������ -> %lf �̴�. ���� ����� 
	printf("�й� : %d\n",s.number);
	printf("�̸� : %s\n",s.name);
	printf("���� : %.1f\n",s.grade);	
	return 0;
 } 
