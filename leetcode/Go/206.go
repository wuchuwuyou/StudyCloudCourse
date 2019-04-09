/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

package main

import (
	// "type"
	"fmt"
)

type ListNode struct {
     Val int
	 Next *ListNode
}

func reverseList(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}
	current := head
	var pre *ListNode

	for current != nil {
		tmp := current.Next
		current.Next = pre
		pre = current
		current = tmp
	}
	return pre
}

func main () {
	var head *ListNode = new(ListNode)
	var pre *ListNode
	pre = head
	for index := 1; index < 6; index++ {
		var a *ListNode = new(ListNode)
		a.Val = index
		pre.Next = a
		pre = pre.Next
	}
	head = head.Next
	fmt.Printf("翻转前\n")
	printNode(head)
	var b *ListNode
	b = reverseList(head)
	fmt.Printf("翻转后\n")
	printNode(b)
}
func printNode(head *ListNode) {
	cur := head
	for cur != nil {
		fmt.Printf("%d \n",cur.Val)
		cur = cur.Next
	}
}
// p c 
// 1 2 3 4 5 null 
//   p c  
// 2 1 3 4 5
// 	p c
// 3 2 1 4 5

// 4 3 2 1 5
// 5 4 3 2 1