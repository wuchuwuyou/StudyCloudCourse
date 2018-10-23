#include <stdio.h>
#include <stdlib.h>


typedef struct _node *Node;
struct _node
{
	int value;
	Node next;
};

void addLinkList(Node *head,int num);
void printNode(Node node);
int main(int argc, char const *argv[])
{
	int number;
	Node head = NULL;
	do {
		scanf("%d",&number);
		if (number != -1)
		{
			addLinkList(&head,number);
		}
	}while (number != -1);

	printNode(head);
	return 0;
}

void addLinkList(Node *head,int num){
	Node p = (Node)malloc(sizeof(struct _node));
	p->value = num;
	p->next = NULL;
	Node *last = *head;
	if (last)
		{
			while(last->next) {
				last = last->next;
			}
			last->next = p;
		}else {
			&head = p;
		}
}

void printNode(Node n) {
	Node head = n;
		
	while(head) {
		printf("%d ",head->value);
		head = head->next;
	}
}
