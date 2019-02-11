package main

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

type ListNode struct {
   Val int
   Next *ListNode
}
// func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
// 	l3 := l1
//     for {
// 		if l1 == nil {
// 			return l3
// 		}
// 		if l2 != nil {
// 			l1.Val = l1.Val+l2.Val
// 			l2 = l2.Next
// 		}
// 		if l1.Val > 9 {
// 			val := l1.Val
// 			l1.Val = val%10
// 			if l1.Next == nil {
// 				l1.Next = new(ListNode)
// 			}
// 			l1.Next.Val += val/10
// 		}
// 		if l1.Next == nil && l2 != nil {
// 			l1.Next = l2
// 			return l3
// 		}
// 		l1 = l1.Next
// 	}
// }

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	head := new(ListNode)
	current := head
	tmp := 0
    for l1 != nil || l2 != nil || tmp >0 {
		sum := tmp
		if l1 != nil {
			sum += l1.Val
			l1 = l1.Next
		}
		if l2 != nil {
			sum += l2.Val
			l2 = l2.Next
		}

		tmp = sum / 10
		current.Val = sum %10
		if l1 ==nil && l2 == nil && tmp == 0 {
			return head
		}
		if current.Next == nil {
			current.Next = new(ListNode)
		}
		current = current.Next
		if tmp > 0{
			current.Val = tmp
		}
	}
	return head
}