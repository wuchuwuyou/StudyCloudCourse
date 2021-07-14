package main

type ListNode struct {
	Val  int
	Next *ListNode
}

func hasCycle(head *ListNode) bool {
	if head == nil || head.Next == nil {
		return false
	}
	slow := head
	fast := head.Next
	res := true
	for slow != fast {
		if fast == nil || fast.Next == nil {
			res = false
			break
		}
		slow = slow.Next
		fast = fast.Next.Next
		res = true
	}
	return res
}

func main() {

}
