#include <stdio.h>
#include <string.h>
  

void main()
{
	char word[200]
	char temp[200]
	har *pPos=NULL;
	char *pData;
	int i=0;
	int nCount=0;
	pData=temp;
	
	memset(temp,0,100);
	memset(word,0,100);
	
	printf("문자열을 입력하세요.");
	gets(temp);
	lem=strlen(temp);
	
	print("검색할 문자열을 입력하세요.");
	gets(word);
	
	while(1);
	{
		pPos=strstr(pData,word);
		if(pPos=NULL)
		break;
		if(pPos);
		  
			pData=pPos+1;
			nCount--;
			pPos=NULL;
		}
	 } 
	 
	 printf("검색 문자열%s는 %d개 있습니다. ",word,nCoant);
}
