#include <stdio.h>
/**
c언어에선 내부적으로 false값을 0으로, 그 외의 값은 전부 true로 정의하고있다. 
**/
int main(void)
{
	int x = 50;
	int y = 60;
	printf("x와 y는 같은가? 답은 %d이다.\n", x==y);	
	y-=10;
	printf("x와 y는 같은가? 답은 %d이다.", x==y);	
	return 0;
}
