//도전 실습예제 11장

#include<stdio.h>
int main(){
	
	int ch;
	int len, max=0;
	
	while(1){
		len=0;
		ch=getchar();
		while((ch!=-1)&&(ch!='\n')){
			len++;
			ch=getchar();
			
		}
		if(ch==EOF)break;
		if(len>max) max=len;
		
	} 
	printf("가장 긴 단어의 길이 :%d\n", max);
	return 0;
} 
