#include "stdio.h"
#include "stdlib.h"
typedef struct Node * List_node;

struct Node
{
	int value;
	int address;
	int next_address;
	List_node next;
};

List_node reverseList(List_node head,int k);
void intputList(List_node head,int address,int value,int next_address);
void printList(List_node head);


List_node reverseList(List_node head,int k){
	int count = 1;
	List_node first,last,tmp;
	first = head->next;
	last = first->next;
	while(count < k) {
		tmp = last->next;
		last->next = first;
		first = last;
		last = tmp;
		count ++;
	}
	head ->next->next = last;
	return first;
}
void printNode(List_node head) {
	while(head)
	{
		printf("%d %d %d \n",head->address,head->value,head->next_address);
		head = head->next;
	}
}
List_node listSort(List_node head, int first_address) {
	List_node node = (List_node)malloc(sizeof(struct Node));
	node->next_address = first_address;
	node->next = head;
	List_node first = node;
	List_node tmp = node;
	
	return node->next;
}

int main(int argc, char const *argv[])
{
	int first_address =0;
	int length = 0;
	int num = 0;

	scanf("%d %d %d",&first_address,&length,&num);
	List_node head = (List_node)malloc(sizeof(struct Node));
	head->next = NULL;
	List_node tmp = head;
	for (int i = 0; i < length; ++i)
	{	

		List_node n = (List_node)malloc(sizeof(struct Node));
		n->next= NULL;
		scanf("%d %d %d",&n->address,&n->value,&n->next_address);

		tmp->next = n;
		tmp = tmp->next;
	}
	printf("\n");
	printNode(head->next);
	List_node tmp1 = listSort(head->next,first_address);
	printf("\n");
	printNode(tmp1);

	return 0;
}