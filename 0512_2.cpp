#include<stdio.h>

void swap_ptr(char **ppa, char **ppb);

void main(void)
{
	char *pa="Sucess";
	char *pb="Fail";
	
	printf("pa & pb Addr :[%u] [%u]\n",&pa, &pb);
	printf("pa -> %s, pb-> %s\n",pa ,pb);
	
	swap_ptr(&pa,&pb);
	
	printf("pa-> %s, pb-> %s\n",pa,pb);
	
}

void swap_ptr(char **ppa,char **ppb){
	char *pt;
	pt=*ppa;
	*ppa=*ppb;
	*ppb=pt;
}
