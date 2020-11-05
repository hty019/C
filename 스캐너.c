#include <stdio.h>
/**
&x에서 &가 의미하는 것은 특정 변수의 메모리 주소를 의미한다고 한다. 아직은 잘 모르겠다. \
scanf 함수는 스캐너의 기능을 하는 것으로 입력을 받을 수 있도록 한다. 
**/
int main(void)
{
	char o;
	int x,y;
	while(1) {
	
	printf("수식을 입력하세요 :\n");
	scanf("%d %c %d",&x, &o, &y);// ","로 구분을 해줌으로써 차례대로 입력을 받겠다는 설정을 할 수 있다.
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
	getchar();//엔터값 버퍼처리 
	printf("계산기를 종료하시겠습니까? (y/n)\n");
	scanf("%c",&o);
	getchar();//엔터값 버퍼처리
	if(o=='n'||o=='N'){
		continue;
	}
	else if(o=='y'||o=='Y'){
		break;
	}
	else {
		printf("입력이 잘못되었습니다.\n");
	}
}
	return 0;
}
