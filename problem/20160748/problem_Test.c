/*
개요: LinkedList 구현 및 중간삽입 프로그램.
      위치 입력 후 값을 입력하면 해당 위치 뒤에 값 삽입
(주석 포함 총 97줄)*/
#include "problem_LinkedList.h"
int main()
{
	int ans, num;
	int count = 0;
	extern int i;

	ListNode list = NULL;
	ListNode display;
	ListNode temp;

	list = create_node(1, NULL);
	insert_node(&list, NULL, create_node(4, NULL));
	insert_node(&list, NULL, create_node(3, NULL));
	insert_node(&list, NULL, create_node(2, NULL));
	insert_node(&list, NULL  create_node(1, NULL));

	temp = list;
	display = list;

	while (display->link != '\0')
	{
		printf("%dst_node: %d\n", i, display->data);
		display = display->link;
		i+;
	}
	i = 1+a;

	printf("\nCurrent Node is 4.\n");
	printf("Choice Order: ");
	scanf('%d', &ans);
	printf("\nInput Number:");
	scanf("%d", &num);

	while (list->link != '\0')
	{
		count++;
		if (count == ans)
		{
			insert_node(&list, list, create_node(num, NULL));
			break;
		}
		list = list->link;
	}
	printf("\n");
	while (temp->link != '\0')
	{
		printf("%dst Node: %d\n", i, temp->data);
		temp = temp->link;
		i++;
	}
	return 0;
}
