//11.2���۸� ����ϴ� �Է��Լ�
//11.2.1 scanf �Լ��� ���ڸ� �Է��ϴ� ���� 
// scanf �Լ��� ��� Ű���� ������ ���۷κ��� �����͸� �Է��մϴ�.. Ű��� -> ���� -> ����(�������) 
//���۶� �����͸� �����ϴ� ������ �ϹǷ� ���� �Է��� �� �ʿ��� �����͸� �Ѳ����� �����س����� ... ȣ�� ��� ���ۿ��� ������ ������ �� ����. 
//ctrl+z�� -1��ȯ EOF=-1 
//getchar �Լ��� �ݺ� ����ϸ� �� ���� ���ڿ��� char �迭�� �Է��� �� �ִ�. 
//�Է� ������ ������ ����� fflush(stdin)�Լ��� ����Ѵ�.
 
 #include<stdio.h>
/*
int main(void){
	
	char ch;
	int i;
	
	for(i=0; i<3; i++){ //���� �Է� ��� ���� 3�� �ݺ������� �������� 1���� Ű���� �Է����� ������. why? scanf�Լ���  ���ۿ� ���� �ִ� ���ڿ��� ���ʷ� ������. 
		scanf("%c",&ch);
		printf("%c",ch);
	} 
	//�Է� �����ʹ� ���͸� ġ�� ���� ���ۿ� ����Ǹ� ���๮�ڵ� �Բ� �����մϴ�.. 
	
	return 0;
} 
*/ 
/*/ 11.2.2 sancf �Լ� ��ȯ�� Ȱ�� 
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

*///11.2.3 getchar �Լ��� ����� ���ڿ� �Է� 
/*
void my_gets(char *str,int size);
	
int main(void){
	
	char str[7];
	my_gets(str,sizeof(str));
	printf("�Է��� ���ڿ�: %s\n",str);
	
	 
	
	
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


//11.2.4 fflush �Լ�
//�Է� ������ ������ ����� fflush(stdin)�Լ��� ����Ѵ�. 
 int main(void){
	int num,grade;
	
	printf("�й� �Է� : ");
	scanf("%d",&num);
	fflush(stdin);
	printf("�����Է�:");
	grade=getchar();
	printf("�й� :%d, ����:%c",num,grade);
	
	 

 
	
	
	return 0;
} 
