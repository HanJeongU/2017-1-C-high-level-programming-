//연습문제 11장
1.
while(getchar()!='\n');//버퍼에 남아 있는 데이터 지우는..
fflush(stdin);// 버퍼에 남아 있는 데이터
fgetc(stdin);// 문자하나 입력 받음.
scanf("%c",&ch);// 문자 하나 받음

2.

char ch;
int num;

num=getchar();
ch=fflush(stdin);
ch=fgetc(stdin);
scanf("%c",&ch);
getchar(&ch);
scanf("%c",&num);

3.

#include<stdio.h>

int main(){
	int ch;
	int cnt=0;
	
	ch=getchar();
	while(ch!='\n')
	{
		if(ch>='a'&&ch<='z')cnt++;
		ch=getchar();
	}
	printf("소문자의 개수:%d\n",cnt);
	
	return 0;
}

4.
#include<stdio.h>
int main()
{
	int num;
	char alpha;
	
	printf("숫자는??\n");
	scanf("%d",&num);
	fflush(stdin);// 버퍼에 잇는 내용 지우기..
	printf("가장 좋아하는 알파벳은?");
	alpha=getchar();
	printf("%d,%c\n",num,alpha);
	
	return 0; 
	
	
}
 
 #include<stdio.h>
 int main()
 {
 	char ch;
 	int cnt=0;
 	
 	while(scanf("%c",&ch)!=-1)
	 {
 		if(ch=='\n')cnt++;	
	 }
	 printf("엔터 키를 누른 횟수: %d\n",cnt);
	 
	 return 0;
 }
 
 
 
 
