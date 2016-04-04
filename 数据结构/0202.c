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
void intputList(List_node &head,int address,int value,int next_address);
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

int main(int argc, char const *argv[])
{
	int first_address =0;
	int length = 0;
	int num = 0;

	scanf("%d %d %d",&first_address,&length,&num);
	List_node source[] = (List_node)malloc(sizeof(struct Node) *length);
	for (int i = 0; i < length; ++i)
	{
		List_node n = (List_node)malloc(sizeof(struct Node));
		scanf("%d %d %d",n->address,n->value,n->next_address);
		source[i] = n;
	}
	return 0;
}