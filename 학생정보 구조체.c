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
	s.number = 12153135;
	strcpy(s.name,"Ȳ�¿�");
	s.grade=3.2;
	printf("�й� : %d\n",s.number);
	printf("�̸� : %s\n",s.name);
	printf("���� : %.1f\n",s.grade);	
	return 0;
 } 
