#include <stdio.h>
#include <stdlib.h>
#include "node.h"


typedef struct _list
{
	Node *head;
}List;

void addLinkList(Node *head,int num):

int main(int argc, char const *argv[])
{
	int number;
	do {
		scanf("%d",&number);
		if (number != -1)
		{

		}
	}while (number != -1);
	return 0;
}

void addLinkList(List* list,int num){
	Node *p = (Node *)malloc(sizeof(Node));
	p->value = num;
	p->next = NULL;
	Node *last = list->head;
	if (last)
	{
		while(last->next){
			last = last->next;
		}
		last->next = p;
	}else {
		list->head = p;
	}
}
