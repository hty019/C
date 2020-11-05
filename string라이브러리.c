#include <stdio.h>
#include <string.h>
/**
strlen함수는 string 라이브러리에서 호출한 것으로, 문자열의 길이를 나타내는 함수이다. 
strcmp함수는 문자열 중 아스키코드 상의 인덱스 순서를 가리는 함수로 보인다.
strcmp(A,B)에서 A가 B보다 앞 선 문자열이면 리턴값으로 음수가 나타난다. 
(영어 사전 등의 문자열 프로그램을 구현할 때 효과적인 함수로 보인다.) 
strcpy함수는 문자열을 복사받는 함수이다. strcpy(A,B)에서 A가 B의 내용을 복사받는 매커니즘이다.  
**/
int main(void)
{
	char input[5]="Love";
	printf("문자열의 길이 : %d\n", strlen(input));
	
	//
	//
	
	char inputOne[5]="A";
	char inputTwo[5]="B";
	printf("문자열 비교 :%d\n",strcmp(inputOne,inputTwo));
	
	//
	//
	
	char inputt[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, inputt);
	printf("문자열 복사 : %s\n", result); 
	
	return 0;
}
