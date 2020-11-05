#include <stdio.h>
/**
1월 1일부터 지정날짜까지 걸리는 일 수를 구하는 프로그램 
c언어에선 사용자 지정 함수를 main함수보다 위에 적게된다. 
**/
int getDays(int months, int days)
{ int i;
	for(i=1;i<months;i++)
	{
		if(i==2)
		{
			days+=28;
		}
		else if(i%2==0)
		{
			days+=30;
		}
		else {
			days+=31;
		}	
	}
	return days;
}
int main(void) 
{
	int months, days;
	printf("날짜(월 일)를 입력하세요. : ex)3 8\n");
	scanf("%d %d",&months,&days);
	getchar();
	printf("1월1일부터 해당 날짜까지 걸리는 일 수는 %d이다.", getDays(months, days));
	return 0; 
}

