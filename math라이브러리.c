#include <stdio.h>
#include <math.h> //pow() =제곱 , abs() =절댓값 이런 기본 수학함수를 가진 라이브러리 


int main(void)
{
	double x= pow(2.0, 20.0);
	printf("2의 20제곱은 %.0f이다.\n", x); 
	
	return 0;
}
