#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "func.h"

int main() {

	char string[100];

	printf("���ڿ��� �Է����ּ���:");
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
}/*main �Լ� �� upper�Լ��� lower �Լ��� ȣ�� ������ ���� �ٲ��� �Ѵ�. �� ������ �ҹ��ڸ� �빮�ڷ� �ٲٴ� ��찡 main �Լ��� if���� �ش��ϴµ� lower�Լ��� �����ϰ� �� ��� �ƽ�Ű�ڵ� ���� �� ���� �ҹ��ڿ� ��ҹ��� �ƽ�Ű�ڵ尪�� ���� 32�� �����ֱ� ������ ������ �� ���� ���ڰ� ��µǰ� �ǰ� �ȴ�. ���� upper�Լ��� �����Ͽ� �ҹ��ڿ��� 32��ŭ�� ���� �빮�� �ƽ�Ű �ڵ尪���� �ٲ�� �ڵ带 �����ؾ��Ѵ�. else if���� ��� ���� ���� �����ϰ� �ƽ�Ű�ڵ� ������� �ٲ��� ������ upper�Լ��� �ƴ� lower �Լ��� ���� ������Ѵ�.*/