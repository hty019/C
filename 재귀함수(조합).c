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
	printf("n���� ���� �� ���� ������� r�� �����ϴ� ����� ��,, n�� r�� �Է��϶� :");
	scanf("%d %d",&n,&r);
	getchar();
	printf("%d���� %d���� �����ϴ� ����� ���� %d���̴�.",n,r,nCr(n,r));
	return 0;
}
