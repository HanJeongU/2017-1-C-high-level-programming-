#include <stdio.h>

char ch[5];
int i;
int compare()
int main()
{
  printf("���ĺ� 5���� ��ҹ��� ��ȯ�����ִ� ���α׷��Դϴ�.\n");
  printf ("���ĺ� 5���� �Է��ϼ��� : ");
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
