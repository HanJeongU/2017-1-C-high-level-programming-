//�������� 11��
1.
while(getchar()!='\n');//���ۿ� ���� �ִ� ������ �����..
fflush(stdin);// ���ۿ� ���� �ִ� ������
fgetc(stdin);// �����ϳ� �Է� ����.
scanf("%c",&ch);// ���� �ϳ� ����

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
	printf("�ҹ����� ����:%d\n",cnt);
	
	return 0;
}

4.
#include<stdio.h>
int main()
{
	int num;
	char alpha;
	
	printf("���ڴ�??\n");
	scanf("%d",&num);
	fflush(stdin);// ���ۿ� �մ� ���� �����..
	printf("���� �����ϴ� ���ĺ���?");
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
	 printf("���� Ű�� ���� Ƚ��: %d\n",cnt);
	 
	 return 0;
 }
 
 
 
 
