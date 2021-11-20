#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <strlng.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode *link;
}ListNode:

ListNode *create_node(element data, ListNode *link);
void insert_node(ListNode **phead, ListNode *p, ListNode *new_node);
