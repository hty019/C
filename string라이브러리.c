#include <stdio.h>
#include <string.h>
/**
strlen�Լ��� string ���̺귯������ ȣ���� ������, ���ڿ��� ���̸� ��Ÿ���� �Լ��̴�. 
strcmp�Լ��� ���ڿ� �� �ƽ�Ű�ڵ� ���� �ε��� ������ ������ �Լ��� ���δ�.
strcmp(A,B)���� A�� B���� �� �� ���ڿ��̸� ���ϰ����� ������ ��Ÿ����. 
(���� ���� ���� ���ڿ� ���α׷��� ������ �� ȿ������ �Լ��� ���δ�.) 
strcpy�Լ��� ���ڿ��� ����޴� �Լ��̴�. strcpy(A,B)���� A�� B�� ������ ����޴� ��Ŀ�����̴�.  
**/
int main(void)
{
	char input[5]="Love";
	printf("���ڿ��� ���� : %d\n", strlen(input));
	
	//
	//
	
	char inputOne[5]="A";
	char inputTwo[5]="B";
	printf("���ڿ� �� :%d\n",strcmp(inputOne,inputTwo));
	
	//
	//
	
	char inputt[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, inputt);
	printf("���ڿ� ���� : %s\n", result); 
	
	return 0;
}
