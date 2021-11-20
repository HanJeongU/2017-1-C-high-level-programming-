#include<stdio.h>
#include<string.h>
//포인터의 속성과 자료형의 속성을 알아야함.. 
//명시적 형변환 
int  main(void)
{
	int a=10, b=20;
	char c[10]={0};
	
	
	int *ip;
	char *cp= "Hellow";
	
	printf("ip Addr: %u\n",&ip);
	printf("a Addr: %u\n",&a);
	ip=&a;
	printf("1st Value(addr):%d(%u)\n",*ip,&ip);
	printf("a Addr: %u\n",&b);
	ip=&b;
	printf("2st Value(addr):%d(%u)\n",*ip,&ip);
	
	
	//명시적 형변환 
(char*)cp = &a;
	printf("EX Value<addr : %d(%u)\n,",*cp,&cp);
	
	printf("EX Value<addr : %02x(%u)\n,",*cp,&cp);
	//명시적 형변환 
	
	ip=&cp;
	printf("Ex Value(addr): %s(%u)\n",*ip, &ip);
	
#if 0
	strcpy(cp, "Test");
	printf("3st Value(addr): %s(%u)\n",*cp,&cp);
#endif
 } 
