#include <stdio.h>
#include <stdlib.h>
/**
구조체(class의 개념) 
**/

struct student {
	int number;
	char name[10];
	double grade;	
}; 

int main(void)
{	
	struct student s;
	
	printf("학번 >");
	scanf("%d",&s.number);
	printf("이름 >");
	scanf("%s",s.name);//문자열은 그 자체로 포인터변수와 같은 역할을 하므로 
	//따로 &주소를 붙이지 않아도 그 자체로 주소로 인식된다. 
	printf("학점 >");
	scanf("%lf",&s.grade);//double 입력 받을 때 %엘에프 -> %lf 이다. 몰라서 헤맸음 
	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n",s.name);
	printf("학점 : %.1f\n",s.grade);	
	return 0;
 } 
