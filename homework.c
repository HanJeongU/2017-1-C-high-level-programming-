#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "func.h"

int main() {

	char string[100];

	printf("문자열을 입력해주세요:");
	scanf("%s", &string);

	for (int i = 0; i < strlen(string); i++) {
		if (string[i] >= 'a' && string[i] <= 'z') {
			string[i] = upper(string[i]);
		}
		else if (string[i] >= 'A' && string[i] <= 'Z') {
			string[i] = lower(string[i]);
		}
	}
	printf("Converted string :%s\n", string);
}/*main 함수 내 upper함수와 lower 함수의 호출 순서가 서로 바뀌어야 한다. 그 이유는 소문자를 대문자로 바꾸는 경우가 main 함수의 if문에 해당하는데 lower함수로 진입하게 될 경우 아스키코드 값이 더 높은 소문자에 대소문자 아스키코드값의 차인 32를 더해주기 때문에 예상할 수 없는 문자가 출력되게 되게 된다. 따라서 upper함수로 변경하여 소문자에서 32만큼을 빼줘 대문자 아스키 코드값으로 바뀌도록 코드를 수정해야한다. else if문의 경우 역시 위와 동일하게 아스키코드 계산방식이 바뀌어야 함으로 upper함수가 아닌 lower 함수로 변경 해줘야한다.*/