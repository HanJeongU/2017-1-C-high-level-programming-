#include<stdio.h>

int main(){
	
	int arrSize, i;
	
	printf("�迭 ����� �Է��ϼ���.");
	scanf("%d", &arrSize);
	
	int vArr[arrSize];
	
	printf("�迭 ũ�� :%d\n",sizeof(vArr));
	
	for(i=0; i<arrSize; i++){
		printf("�迭�� �Է��� ��: ");
		scanf("%d",&vArr[i]) ;
	}
	
	for(i=0; i<arrSize; i++){
		printf("%d Index ��: %d\n",i,vArr[i]);
	}
	
	
}
