#include <stdio.h>

char ch[5];
int i;
int compare()
int main()
{
  printf("알파벳 5개를 대소문자 변환시켜주는 프로그램입니다.\n");
  printf ("알파벳 5개를 입력하세요 : ");
  scanf ("%c",&ch);
  compare();
  printf ("%c\n",ch);

  return 0;
}

int compare() {
   for (i=0; i<5; i++) 
	{
        if (ch[i] >= 'A' && ch[i] <='Z') 
	{
            ch[i] = ch[i] + ('a' - 'A');
 
        }
        else if (ch[i] >= 'a' && ch[i] <='z') 
	{
            ch[i] = ch[i] - ('a' - 'A');
        }
      }
  return ch;
}
