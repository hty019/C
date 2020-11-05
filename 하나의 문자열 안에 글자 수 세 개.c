#include <stdio.h>
/**
gets() 함수는 input이라는 array 안에 사용자의 입력을 받은 
문자열을 순서대로 넣어주는 명령어이다. 
**/
int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count]!='\0')// "\o"=null,,
	{
		count++; 
	 }
	 printf("입력한 문자열의 길이는 %d입니다.", count);
	 printf("입력한 문자열 : %s", input); 
	 return 0;
}
