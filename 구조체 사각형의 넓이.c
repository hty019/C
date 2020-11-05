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
	
	printf("왼쪽 상단의 좌표 >");
	scanf("%d %d",&r.p1.x,&r.p1.y); //구조체의 약자를 써도 무관하다는 점이 별표..! 
	printf("오른쪽 하단의 좌표 >");
	scanf("%d %d",&r.p2.x,&r.p2.y);//rect. = r.
	w = r.p2.x-r.p1.x;
	h = r.p1.y-r.p2.y;
	area = w*h;
	peri=2*w+2*h; // peri가 뭔가 했더니 '둘레'를 의미한다.
	printf("사각형의 넓이는 %d이고 둘레는 %d이다.",area,peri);
	
	return 0;
}
