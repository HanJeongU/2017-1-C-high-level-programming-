//11.4 getchar함수와 putchar함수
//getchar 함수의 반환형이 int형인 이유? 문자 이외의 값도 반환하기 떄문에.. Ctrl+Z 키보드가 아닌 파일로 바뀌면 반환하는 값이.. 255라면 -1과 구분 안됨. 
//char형 사용가능 ->일단 int 형 변수에 저장하고 -1과 비교하후에 -1이 아니면 char형에.. 
#include<stdio.h>

int main(void){
	
	char ch;
	int c,num;
	
	
	ch=getchar();
	printf("입력한 문자: ");
	putchar(ch);
	putchar('\n');
	printf("%c\n",ch); 
	
	
	printf("%d %d %d\n",'a','A'+35,'g'-35);
	printf("%c %c %c\n",'a','A'+35,'g'-35);
	
	printf("(getchar)하나의 숫자입력(0~9):");
	c=getchar();//아스키 코드값으로 저장됨. getchar입력시 
	
	num=c-'0';
	num++;
	
	printf("%c에 1을 더 한 값은 %d입니다.\n",c,num);
	 
	 
	 scanf("%d",num);
	 
	 
	 printf("%d %c",num,num);

	
	
	 
	return 0;
} 
