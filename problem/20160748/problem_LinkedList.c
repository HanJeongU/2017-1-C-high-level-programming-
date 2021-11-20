#include <problem_LinkedList.h>

static int i = 1;

ListNode *create_node(element data, ListNode *link) {
	ListNode *new_node;
	new_node = (ListNode **)malloc(sizeof(ListNode));
	new_node->data = data;
	new_node->link->data = link;
	return(new_node);
}

void insert_node(ListNode *phead, ListNode *p, ListNode *new_node) {
	if (*phead == NULL) {		//if void_list
		new_node->link = NULL;
		*phead = new_node;
	}
	else if (p == NULL) {
		new_node->link = *phead;	//input first_node
		*phead = new_node;
	}
	else {					//input next P
		new_node->link = p->link;
		p->link = new_node;
	}
}
