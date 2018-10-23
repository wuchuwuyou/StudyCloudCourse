#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

// List Read(); /* 细节在此不表 */
// void Print( List L );  //细节在此不表；空链表将输出NULL 

// List Merge( List L1, List L2 );
List Read() 
{
    int count;
    PtrToNode head = NULL;
    PtrToNode last = NULL;
    int num = 0;
    scanf("%d",&count);
    if (count == 0)
    {
        return NULL;
    }
    head = (PtrToNode)malloc(sizeof(struct Node));
    head->Next = NULL;
    last = head;
    for (int i = 0; i < count; ++i)
    {
        scanf("%d",&num);
        PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
        node->Data = num;
        node->Next = NULL;
        last->Next = node;
        last = node;
    }
    return head;
} 
void Print( List L )
{
    if (L ->Next == NULL)
    {
        printf("NULL\n");
        return;
    }
    L = L ->Next;
    while(L!=NULL){
        printf("%d ",L->Data);
        L = L->Next;
    }
    printf("\n");
}

List Merge( List L1, List L2 ) 
{
    List r;
    PtrToNode L = (PtrToNode)malloc(sizeof( struct Node ));
    List p = L1->Next;
    List q = L2->Next;
    r=L;
    L->Next = NULL;
    while(p!= NULL && q!=NULL) {
        if (p->Data < q->Data)
        {
            r->Next =p;
            p=p->Next;
            r = r->Next;
        }else {
            r->Next = q;
            q = q->Next;
            r = r->Next;
        }
    }
     r->Next = NULL;
        if (p!=NULL)
        {
            r->Next = p;
        }
        if (q!=NULL)
        {
            r->Next = q;
        }
        L1->Next = NULL;
        L2->Next = NULL;
        return L;
}
int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}
