//11.4 getchar�Լ��� putchar�Լ�
//getchar �Լ��� ��ȯ���� int���� ����? ���� �̿��� ���� ��ȯ�ϱ� ������.. Ctrl+Z Ű���尡 �ƴ� ���Ϸ� �ٲ�� ��ȯ�ϴ� ����.. 255��� -1�� ���� �ȵ�. 
//char�� ��밡�� ->�ϴ� int �� ������ �����ϰ� -1�� �����Ŀ� -1�� �ƴϸ� char����.. 
#include<stdio.h>

int main(void){
	
	char ch;
	int c,num;
	
	
	ch=getchar();
	printf("�Է��� ����: ");
	putchar(ch);
	putchar('\n');
	printf("%c\n",ch); 
	
	
	printf("%d %d %d\n",'a','A'+35,'g'-35);
	printf("%c %c %c\n",'a','A'+35,'g'-35);
	
	printf("(getchar)�ϳ��� �����Է�(0~9):");
	c=getchar();//�ƽ�Ű �ڵ尪���� �����. getchar�Է½� 
	
	num=c-'0';
	num++;
	
	printf("%c�� 1�� �� �� ���� %d�Դϴ�.\n",c,num);
	 
	 
	 scanf("%d",num);
	 
	 
	 printf("%d %c",num,num);

	
	
	 
	return 0;
} 
