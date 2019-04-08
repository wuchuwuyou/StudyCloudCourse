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
	current := head.Next
	pre := head
	for current.Next != nil {
		pre.Next = current.Next
		current.Next = pre
		head = current
		current = pre.Next
	}
	return head
}

func main () {
	var head *ListNode
	var pre *ListNode
	pre = head
	for index := 1; index < 6; index++ {
		var a *ListNode = new(ListNode)
		a.Val = index
		pre = a
		pre = pre.Next
	}
	var b *ListNode
	b = reverseList(head)
	for b != nil {
		fmt.Printf("%d ",b.Val)
		b = b.Next
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