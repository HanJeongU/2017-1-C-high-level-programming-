#include<stdio.h>
#include<string.h>

int main(void)
{
	int a= 10,b=20;
	char c[10]={0};
	
	int *ip;
	char *cp="Hellow";
	
	printf("ip Addr:%u\n", &ip);
	printf("a Addr :%u\n", &a);

	ip=&a;
		printf("1st Value(addr): %d(%u)\n",ip,&ip);
	ip=&b;
	printf("2st Value(addr): %d(%u)\n",ip,&ip);
	
#if 0
	strcpy(cp,"test");
	printf("3st Valus(addr): %s(%u)\n",cp,&cp);
#endif
	
#if 1
 	printf("cp Addr: %u\n",&cp);
	cp=c;
	strcpy(c,"Test");
	printf("&4st Value(addr): %s(%u)\n",cp,&cp);
#endif
	
}
