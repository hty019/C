#include <stdio.h>
int nCr(int n, int r){
	if(r==0||n==r){
		return 1;
	}	
	else {
		return nCr(n-1, r-1)+nCr(n-1,r);
	}
}
int main(void) {
	int n,r;
	printf("n개의 물건 중 순서 관계없이 r개 선택하는 경우의 수,, n과 r을 입력하라 :");
	scanf("%d %d",&n,&r);
	getchar();
	printf("%d개중 %d개를 선택하는 경우의 수는 %d번이다.",n,r,nCr(n,r));
	return 0;
}
