#include<stdio.h>

int main(){
	
	int arrSize, i;
	
	printf("배열 사이즈를 입력하세요.");
	scanf("%d", &arrSize);
	
	int vArr[arrSize];
	
	printf("배열 크기 :%d\n",sizeof(vArr));
	
	for(i=0; i<arrSize; i++){
		printf("배열에 입력할 값: ");
		scanf("%d",&vArr[i]) ;
	}
	
	for(i=0; i<arrSize; i++){
		printf("%d Index 값: %d\n",i,vArr[i]);
	}
	
	
}
