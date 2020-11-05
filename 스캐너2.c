#include <stdio.h>
/**
정해진 개수의 정수를 더하는 프로그램 
**/
int main(void)
{
	int i,x,num,sum=0;
	printf("더할 정수의 개수를 입력하세요. :\n");
	scanf("%d",&num);
	getchar();
	for(i=0;i<num;i++) {
		printf("더할 정수를 입력하세요. :\n");
		scanf("%d",&x);
		getchar();
		sum+=x;
	}
	printf("입력한 정수의 총 합은 %d입니다.",sum);
 } 
