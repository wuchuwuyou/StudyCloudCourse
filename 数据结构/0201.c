#include "stdio.h"
#include "stdlib.h"
typedef struct PolyNode *Polynomial;
struct PolyNode
{
	int coef; // 系数
	int expon; // 指数
	Polynomial link;
};
void attach(int c,int e,Polynomial *pRear);
Polynomial readPoly();
Polynomial poly_add(Polynomial p1,Polynomial p2);
Polynomial poly_mult(Polynomial p1,Polynomial p2);
void printPoly(Polynomial p);

Polynomial readPoly() {
	Polynomial p,rear,t;
	int c,e,n;
	scanf("%d",&n);
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	p->link =NULL;
	rear =p;
	while(n--){
		scanf("%d %d",&c,&e);
		attach(c,e,&rear);
	}
	t =p;
	p = p->link;
	free(t);
	return p;
}
void attach(int c,int e,Polynomial *pRear) {
	Polynomial p;
	p = (Polynomial)malloc(sizeof(struct PolyNode));
	p->coef = c;
	p->expon =e;
	p->link = NULL;
	(*pRear)->link = p; 
	*pRear = p;
}
Polynomial poly_add(Polynomial p1,Polynomial p2) {
	Polynomial t1,t2,p,rear;
	t1 = p1;
	t2 = p2;
	p = (Polynomial)malloc(sizeof(struct PolyNode));
	p->link = NULL;
	rear = p;
	while(t1 && t2) {
		if (t1->expon == t2->expon)
		{
			int coef = t1->coef + t2->coef;
			if (coef != 0)
			{
				attach(coef,t1->expon,&rear);
				// rear = rear->link;	
			}
			t1 = t1->link;
			t2 = t2->link;
		}else if (t1->expon > t2->expon)
		{
			// rear->link = t1;
			attach(t1->coef,t1->expon,&rear);
			// rear = rear->link;	
			t1 = t1->link;
		}else if (t1->expon < t2->expon)
		{
			// rear->link = t2;
			attach(t2->coef,t2->expon,&rear);
			// rear = rear->link;	
			t2 = t2->link;
		}
	}
	while(t1) {
		// rear->link = t1;
		attach(t1->coef,t1->expon,&rear);
		t1 = t1->link;
		// rear = rear->link;
	}
	while(t2) {
		// rear->link = t2;
		attach(t2->coef,t2->expon,&rear);
		t2 = t2->link;
		// rear = rear->link;
	}
	Polynomial t = p;
	p = p->link;
	free(t);
	return p;
}
Polynomial poly_mult(Polynomial p1,Polynomial p2) {
	Polynomial p,rear,t1,t2,t;
	int c,e;
	if (p1 == NULL || p2 == NULL)
	{
		return NULL;
	}
	t1 = p1;
	t2 = p2;
	p = (Polynomial)malloc(sizeof(struct PolyNode));
	p->link = NULL;
	rear = p;
	while(t2) {
		attach(t1->coef *t2->coef,t1->expon+t2->expon,&rear);
		t2 = t2->link;
	}
	t1 = t1->link;
	// printf("start first p:\n");
	// printPoly(p);
	while(t1) {
		t2 = p2;
		rear = p;
		while(t2) {
			c = t1->coef * t2->coef;
			e = t1->expon + t2->expon;
			while(rear->link && rear->link->expon>e) {
				rear = rear->link;
			}
			if (rear->link &&rear->link->expon==e){
				if (rear->link->coef+c){
					rear->link->coef +=c;
				}else {
					t = rear->link;
					rear->link = t->link;
					free(t);
				}
			}else {
				t = (Polynomial)malloc(sizeof(struct PolyNode));
				t->coef = c;
				t->expon = e;
				t->link = rear->link;
				rear->link = t;
				rear = rear->link;
			}
			t2 = t2->link;
		}
		t1 =t1->link;
	}
	t2 = p;
	p = p->link;
	free(t2);
	return p;
}
void printPoly(Polynomial p) {

	int flag = 0;
	if (p == NULL)
	{
		printf("0 0\n");
		return;
	}
	while (p){
		if (flag==0)
		{
			flag = 1;
		}else 
			printf(" ");

		printf("%d %d",p->coef,p->expon);
		p = p->link;
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	Polynomial p1,p2;
	Polynomial add ,mult;
	p1 = readPoly();
	p2 = readPoly();

	mult = poly_mult(p1,p2);
	printPoly(mult);
	add = poly_add(p1,p2);
	printPoly(add);
	return 0;
}