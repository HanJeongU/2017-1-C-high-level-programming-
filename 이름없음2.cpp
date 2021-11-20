//문자열은 컴파일 과정에서 첫 번쨰 문자의 주소로 바뀝니다.
//같은 문자열 상수는 여러번 사용해도 하나만 저장합니다. 
#include<stdio.h>
/*
int main(void){
	
	printf("주소값 : %p\n","mango");
	printf("첫 번쨰 문자 : %c\n",*"mango")//참조 연산자. -> 문자열은 첫 번쨰 문자의 주소 바뀜  
	printf("두 번쨰 문자 : %c\n",*("mango"+1));
	printf("세 번쨰 문자 : %c\n","mango"[2]);
	
	return 0;
	

} 
*/

//문자열은 주소이므로 char포인터에 대입하여 사용 가능. 
/*int main(void){

char *desert ="apple";//문자열의 시작 위치값만 저장됨.  

printf("오늘 후식은 %s입니다.\n", desert);

desert="banana";

printf("내일 후식은 %s입니다.\n",desert);

return 0; 
	
	
}
*/

/*
//12.1.3 scanf 함수를 사용한 문자열 입력
//scanf 함수는 중간에 공백문자,탭문자,개행문자가 있으면 그 이전까지만 저장합니다.
//나머지 문자열은 버퍼에 남아 있으며 다음에 호출되는 함수가 입력에 사용합니다.......... 
//크기를 모름. 
int main(){
	char str[80]; // 79까지만 저장됨. 80번쨰는 \n
	
	printf("문자열 입력 :");
	scanf("%s",str);
	printf("첫 번쨰 단어 :%s\n",str);
	
	scanf("%s",str);
	printf("버퍼에 남아 있는 두 번쨰 단어: %s\n",str);
	
	return 0;
 
	
	
	
}

*/
//gets 함수를 사용한  문자열 입력
//gets 함수는 중간의 공백이나 탭문자를 포함하여 문자열 한 줄을 입력합니다...

int main(void) 
{
	char str[80];
	
	printf("공백이 포함된 문자열 입력 :");
	gets(str);	
	
	
 } 
 

 
