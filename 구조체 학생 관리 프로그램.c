#include <stdio.h>
#define SIZE 5

struct student {
	int number;
	char name[20];
	double gpa;
}; 

int main(void)
{
	struct student list[SIZE];
	int i;
	for(i=0;i<SIZE;i++){	
	printf("num >");
	scanf("%d",&list[i].number);
	printf("name >");
	scanf("%s",list[i].name);
	printf("gpa >");
	scanf("%lf",&list[i].gpa);
}
	for(i=0;i<SIZE;i++) {
		printf("��ȣ:%d,�̸�:%s,����:%.lf\n",list[i].number,list[i].name,list[i].gpa);
	}
	return 0;
}
