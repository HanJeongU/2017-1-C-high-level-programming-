#include<stdio.h>

void swap_ptr(char *pa, char *pb);

void main(void)
{
	char *pa="Sucess";
	char *pb="Fail";
	
	printf("pa(%u)-> %s,pb(%u)->%s\n",pa,pa,pb,pb);
	
	//�߸��� ȣ��
	swap_ptr(&pa, &pb);
	
	printf("pa(%u)->%s, pb(%u)->%s\n",pa,pa,pb,pb);
	 
}

void swap_ptr(char *pr, char *pb)
{
	//����� �� �ƴ�.
	printf("pa(%u),pb(%u)\n",pa,pb);
	
	char *pt;
	pt=pa;
	pa=pb;
	pb=pt;
	
	//�� ��
	pprintf("pa(%u)->%s, pb(%u)->%s\n",pa,pa,pb,pb);
	 
	
}

