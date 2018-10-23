/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include "stdlib.h"
 struct ListNode {
  	int val;
    struct ListNode *next;
 };
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    ListNode *head1 = l1;
    ListNode *head2 = l2;
    ListNode *list = (ListNode *)malloc(sizeof(struct ListNode));
    list->val = 0;
    list->next = NULL;
    ListNode *tmp = list;
    while(head1 != NULL && head2 != NULL) {
    	ListNode *node = (ListNode*)malloc(sizeof(struct ListNode));
    	node->val = 0;
    	node->next = NULL;
    	if (tmp->next)
    	{
    		node->val = tmp->next->val;
    	}
    	int sum =  head1->val + head2->val+node->val;
    	if (sum>=10)
    	 {
    	 	ListNode *node1 = (ListNode*)malloc(sizeof(struct ListNode));
    		node1->val = sum/10;
    		node1->next = NULL;
    		node->next = node1;
    	 } 
    	node->val = sum%10;
    	tmp->next = node;
    	head1 = head1->next;
    	head2 = head2->next;
    }
    return list->next;
}