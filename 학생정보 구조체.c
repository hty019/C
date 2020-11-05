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
	s.number = 12153135;
	strcpy(s.name,"황태연");
	s.grade=3.2;
	printf("학번 : %d\n",s.number);
	printf("이름 : %s\n",s.name);
	printf("학점 : %.1f\n",s.grade);	
	return 0;
 } 
