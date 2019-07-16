/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

 //为啥呢

func invertTree(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}
	root.Right = invertTree(root.Left)
	root.Left = invertTree(root.Right)
	return root
}

func invertTree(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}

	root.Right, root.Left = invertTree(root.Left), invertTree(root.Right)
	return root
}