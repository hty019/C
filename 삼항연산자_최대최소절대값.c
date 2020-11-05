#include <stdio.h>

int main(void)
{
	int x= -50, y=30;
	int absoluteX = (x>0) ? x:-x;
	int max = (x > y) ? x:y;
	int min = (x < y) ? x:y;
	printf("x의 절댓값은 %d이다.", absoluteX);
	printf("x와 y의 최댓값은 %d이다.",max);
	printf("x와 y의 최소값은 %d이다.",min);
	return 0;
}
