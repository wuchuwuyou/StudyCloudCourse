#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType data;
    ElementType exponent;
    PtrToNode   next;
};
typedef PtrToNode List;

PtrToNode read();
void add(PtrToNode node1,PtrToNode node2);
void mulit(PtrToNode node1,PtrToNode node2);
void printNode(PtrToNode node);
PtrToNode combieNode(PtrToNode node);
int main(int argc, char const *argv[])
{
	PtrToNode n1 = read();
	PtrToNode n2 = read();
	
	mulit(n1,n2);

	add(n1,n2);
	return 0;
}
PtrToNode read() {
	int count = 0;
	scanf("%d",&count);
	if (count == 0)
	{
		return NULL;
	}
	PtrToNode L = NULL;
	L = (PtrToNode)malloc(sizeof(struct Node));
	PtrToNode head = L ;
	for (int i = 0; i < count; ++i)
	{
		int num = 0;
		int ex = 0;
		scanf("%d %d",&num,&ex);
		PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
		node->data = num;
		node->exponent = ex;
		node->next = NULL;
		head->next = node;
		head = head->next;
	}
	return L->next;
}

void add(PtrToNode node1,PtrToNode node2) {
	PtrToNode L  = (PtrToNode)malloc(sizeof(struct Node));
	PtrToNode head = L;
	PtrToNode p = node1;
	PtrToNode q = node2;
	while (p != NULL && q!=NULL)
	{
		PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
		if (p->exponent==q->exponent)
		{	
			int n = p->data + q->data;
			node->data = n;
			node->exponent = p->exponent;
			node->next = NULL;
			head ->next = node;
			head = head->next;
			p = p->next;
			q = q->next;
		}
		else if (p->exponent>q->exponent)
		{
			int n = p->data;
			node->data = n;
			node->exponent = p->exponent;
			node->next = NULL;
			head ->next = node;
			head = head->next;
			p = p->next;
		}
		else if (p->exponent<q->exponent)
		{
			int n = q->data;
			node->data = n;
			node->exponent = q->exponent;
			node->next = NULL;
			head ->next = node;
			head = head->next;
			q = q->next;
		}
	}
	if (p != NULL)
	{
		head->next = p;
	}
	if (q != NULL)
	{
		head->next = q;
	}
	L = L->next;
	printNode(L);

}
void mulit(PtrToNode node1,PtrToNode node2){
	PtrToNode L  = (PtrToNode)malloc(sizeof(struct Node));
	PtrToNode head = L;
	PtrToNode p = node1;
	PtrToNode q = node2;
	while(q != NULL) {
		while(p != NULL) {
			PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
			int n = p->data * q->data;
			int ex = p->exponent + q->exponent;
			node->data = n;
			node->exponent = ex;
			node->next = NULL;
			head->next = node;
			head = head ->next;
			p= p->next;
		}
		p = node1;
		q = q->next;
	}
	L = L->next;
	L = combieNode(L);
	printNode(L);
}
PtrToNode combieNode(PtrToNode node) {
	// PtrToNode L  = (PtrToNode)malloc(sizeof(struct Node));
	// L ->next = NULL;
	// L->exponent = 0;
	// L ->data = NULL;
	// printNode(node);
	PtrToNode L = node;
	PtrToNode p = node;
	PtrToNode q = node;
	while(p){
		q = p->next;
		while(q&&q->next) {

			if (p->exponent == q->next->exponent)
			{
				if (p->data + q->data == 0)
				{
					// q->next = q->next->next;
					p = p->next;

				}else {
					p->data = p->data+q->next->data;
				}

				q->next = q->next->next;
			}else {
				q = q ->next;
			}
		}
		p=p->next;
	}
	// printNode(node);
	return L;

}
void printNode(PtrToNode node) {
	while(node!=NULL){
		int n = node->data;
		int e = node->exponent;
		printf("%d %d ",n,e);
		node = node->next;
	}
	printf("\n");
}