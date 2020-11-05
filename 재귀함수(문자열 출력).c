#include <stdio.h>
/**
재귀함수(Reculsive function) 
**/
void paint(int count)
{	if(count==0){
		return;
	}
	printf("문자열을 출력합니다.\n");
	count--;
	paint(count); 
}

int main(void)
{	int count;
	printf("출력할 문자열의 개수를 입력하세요. :");
	scanf("%d",&count);
	getchar();
	paint(count);
}
