#include <stdio.h>
/**
두 변수의 값을 서로 바꾸는 포인터 함수 
**/
void swap(int *x, int *y)
{
	int temp;
	temp =*x;
	*x=*y;
	*y=temp;
}
int main(void){
	int x=2;
	int y=1;
	swap(&x,&y);//이 부분이 중점인거 같다. 단순히 값을 옮기는 개념이 아니라, 데이터 주소 변환 
	//x, y가 값으로 들어가는 것이 아니라, &x,&y여야만 하는 이유가 있을 것이다. 
	printf("x=%d\ny=%d",x,y);
	return 0;
	
}
