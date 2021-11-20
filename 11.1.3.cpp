//scanf 함수를 사용한 문자 입력
//%c 변환 문자는 공백 탭 개행문자도 입력함.
//%c 앞에 공백을 사용하면 문자도 분리하여 입력가능. (\t \n도 가능)
//int 형에 문자 입력시 첫 한바이트 공간에 저장 나머지 세 바이트는 쓰레기값됨. 
#include<stdio.h>

int main(void)
{
	char ch1,ch2;
	
	scanf(" %c %c", &ch1, &ch2); //%c 앞에 공백을 사용하면 문자도 분리하여 입력가능. (\t \n도 가능)
	printf("[%c%c]",ch1,ch2);
	
	return 0;

 } 
 
