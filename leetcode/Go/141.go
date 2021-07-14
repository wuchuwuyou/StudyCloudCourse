package main

type ListNode struct {
	Val  int
	Next *ListNode
}

/**
 * 快慢指针，慢指针一次移动一位 快指针一次移动两位
 * 如果有环 那在某个时间点 快慢指针就会相遇
 * 如果快指针为空，则表明没有环
 */
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
	}
	return res
}

func main() {

}
