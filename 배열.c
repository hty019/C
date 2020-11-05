#include <stdio.h>
#define SIZE 5
/**
5개의 정수 중에서 최댓값과 최솟값의 위치를 출력하는 프로그램 
매커니즘 이해가 덜 된 부분 : C언어 입력체계에선, for문의 반복을 한꺼번에 입력해도 동작한다.
ex) 53 25 65 43 26 이렇게 한꺼번에 입력해도 각각 입력된 순서에 따라 array주소에 입력이 된다.
반대로, 하나 입력하고 엔터 누르고 하나 입력하고 엔터 누르면
중간 주소를 스킵할 때가 있다. 왜 이렇게 되는지 물어봐야한다. 
**/
int main(void)
{
	int i,max, index;
	int array[SIZE];
	max = 0;
	index=0;
	for(i=0;i<SIZE;i++) {
		scanf("%d",&array[i]);
		getchar();
		if(max<array[i]){
			max = array[i];
			index= ++i;
		} 
	}
	printf("리스트의 숫자 중 최댓값은 %d이며 %d번째 수이다.",max,index);
}
