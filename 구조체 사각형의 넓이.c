#include <stdio.h>

struct point {
	int x;
	int y;
};
struct rect {
	struct point p1;
	struct point p2;
};
int main(void)
{
	struct rect r;
	int w,h,area,peri;
	
	printf("���� ����� ��ǥ >");
	scanf("%d %d",&r.p1.x,&r.p1.y); //����ü�� ���ڸ� �ᵵ �����ϴٴ� ���� ��ǥ..! 
	printf("������ �ϴ��� ��ǥ >");
	scanf("%d %d",&r.p2.x,&r.p2.y);//rect. = r.
	w = r.p2.x-r.p1.x;
	h = r.p1.y-r.p2.y;
	area = w*h;
	peri=2*w+2*h; // peri�� ���� �ߴ��� '�ѷ�'�� �ǹ��Ѵ�.
	printf("�簢���� ���̴� %d�̰� �ѷ��� %d�̴�.",area,peri);
	
	return 0;
}
