
/**  Definition for singly-linked list. */
  
type ListNode struct {
      Val int
      Next *ListNode
 }


func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	n := &ListNode{}
	cur := n;
	for l1 != nil || l2 != nil {
		if l1 == nil {
			cur.Next = l2
			l2 = nil
			continue
		}
		if l2 == nil {
			cur.Next = l1
			l1 = nil
			continue
		}
		if l1.Val > l2.Val {
			cur.Next = l2
			cur = cur.Next
			l2 = l2.Next
		} else {
			cur.Next = l1
			cur = cur.Next
			l1 = l1.Next
		}
	}
	return n.Next
}