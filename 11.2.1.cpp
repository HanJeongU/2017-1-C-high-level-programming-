//11.2버퍼를 사용하는 입력함수
//11.2.1 scanf 함수가 문자를 입력하는 과정 
// scanf 함수는 사실 키보드 이전에 버퍼로부터 데이터를 입력합니다.. 키모드 -> 버퍼 -> 변수(저장공간) 
//버퍼란 데이터를 보관하는 역할을 하므로 최초 입력할 떄 필요한 데이터를 한꺼번에 저장해놓으면 ... 호출 즉시 버퍼에서 데이터 가져올 수 있음. 
//ctrl+z는 -1반환 EOF=-1 
//getchar 함수를 반복 사용하면 한 줄의 문자열을 char 배열에 입력할 수 있다. 
//입력 버퍼의 내용을 지울떄는 fflush(stdin)함수를 사용한다.
 
 #include<stdio.h>
/*
int main(void){
	
	char ch;
	int i;
	
	for(i=0; i<3; i++){ //문자 입력 출력 과정 3번 반복이지만 실행결과는 1번의 키보드 입력으로 끝난다. why? scanf함수가  버퍼에 남아 있는 문자열을 차례로 가져옴. 
		scanf("%c",&ch);
		printf("%c",ch);
	} 
	//입력 데이터는 엔터를 치는 순간 버퍼에 저장되며 개행문자도 함꼐 저장합니다.. 
	
	return 0;
} 
*/ 
/*/ 11.2.2 sancf 함수 반환값 활용 
int main(void){


int res;
char ch;

while(1){
	res=scanf("%c",&ch);
	if(res==EOF)break; //-1 or EOF ctrl+z
	printf("%d",ch);
	
} 

	
	
	
	return 0;
} 

*///11.2.3 getchar 함수를 사용한 문자열 입력 
/*
void my_gets(char *str,int size);
	
int main(void){
	
	char str[7];
	my_gets(str,sizeof(str));
	printf("입력한 문자열: %s\n",str);
	
	 
	
	
	return 0;
} 

void my_gets(char* str,int size)
{
	char ch;
	int i=0;
	
	ch=getchar();
	while((ch!='n')&&(i<size-1))
	{
		str[i]=ch;
		i++;
		ch=getchar();
		
	}
str[i]='\0';
}
*/


//11.2.4 fflush 함수
//입력 버퍼의 내용을 지울떄는 fflush(stdin)함수를 사용한다. 
 int main(void){
	int num,grade;
	
	printf("학번 입력 : ");
	scanf("%d",&num);
	fflush(stdin);
	printf("학점입력:");
	grade=getchar();
	printf("학번 :%d, 학점:%c",num,grade);
	
	 

 
	
	
	return 0;
} 
