#include <stdio.h>
/**
gets() �Լ��� input�̶�� array �ȿ� ������� �Է��� ���� 
���ڿ��� ������� �־��ִ� ��ɾ��̴�. 
**/
int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count]!='\0')// "\o"=null,,
	{
		count++; 
	 }
	 printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.", count);
	 printf("�Է��� ���ڿ� : %s", input); 
	 return 0;
}
