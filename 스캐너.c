#include <stdio.h>
/**
&x���� &�� �ǹ��ϴ� ���� Ư�� ������ �޸� �ּҸ� �ǹ��Ѵٰ� �Ѵ�. ������ �� �𸣰ڴ�. \
scanf �Լ��� ��ĳ���� ����� �ϴ� ������ �Է��� ���� �� �ֵ��� �Ѵ�. 
**/
int main(void)
{
	char o;
	int x,y;
	while(1) {
	
	printf("������ �Է��ϼ��� :\n");
	scanf("%d %c %d",&x, &o, &y);// ","�� ������ �������ν� ���ʴ�� �Է��� �ްڴٴ� ������ �� �� �ִ�.
	if(o=='+') {
		printf("%d %c %d = %d",x,o,y,x+y);
	}
	if(o=='-') {
		printf("%d %c %d = %d",x,o,y,x-y);
	}
	if(o=='*') {
		printf("%d %c %d = %d",x,o,y,x*y);
	}
	if(o=='/') {
		printf("%d %c %d = %d",x,o,y,x/y);
	}
	getchar();//���Ͱ� ����ó�� 
	printf("���⸦ �����Ͻðڽ��ϱ�? (y/n)\n");
	scanf("%c",&o);
	getchar();//���Ͱ� ����ó��
	if(o=='n'||o=='N'){
		continue;
	}
	else if(o=='y'||o=='Y'){
		break;
	}
	else {
		printf("�Է��� �߸��Ǿ����ϴ�.\n");
	}
}
	return 0;
}
