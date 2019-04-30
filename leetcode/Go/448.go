package main

import (
	"fmt"
)

// func findDisappearedNumbers(nums []int) []int {
// 	size := len(nums)
// 	var res = []int{}
// 	for index := 0; index < size; index++ {
// 		if(nums[index]>0) {
// 			nums[nums[index]-1] = -nums[nums[index]-1]
// 		}else {
// 			m := -nums[index]
// 			if(nums[m-1] < 0) {
// 				nums[m-1] = - nums[m-1]
// 			}
// 		}
// 	}
// 	fmt.Printf("%d\n",nums)
// 	for index := 0; index < size; index++ {
// 		if nums[index] > 0 {
// 			res = append(res,index+1)
// 		}
// 	}
// 	return res
// }


/*
i	nums[i]	target	nums[target]	nums
0	4		3		7				7 3 2 4 8 2 3 1
0	7		6		3				3 3 2 4 8 2 7 1
0	3		2		2				2 3 3 4 8 2 7 1
0	2		1		3				3 2 3 4 8 2 7 1
0	3		2		3				
1	2		1		2
2	3		2		3
3	4		3		4
4	8		7		1				3 2 3 4 1 2 7 8
4	1		0		3				1 2 3 4 3 2 7 8
4	3		2		3
5	2		1		2
6	7		6		7
7	8		7		8
*/
func findDisappearedNumbers(nums []int) []int {
	for i := 0; i < len(nums); {
		target := nums[i] - 1
		if nums[i] != i+1 && nums[target] != nums[i] {
			// nums[target], nums[i] = nums[i], nums[target]
			tmp := nums[i]
			nums[i] = nums[target]
			nums[target] = tmp
		} else {
			i++
		}
		fmt.Printf("%d = %d\n",i,nums)
	}
	fmt.Printf("%d\n",nums)
	res := make([]int, 0)
	for i := 0; i < len(nums); i++ {
		if nums[i] != i+1 {
			res = append(res, i+1)
		}
	}
	return res
}

func main () {
	n := []int{4,3,2,7,8,2,3,1}
	fmt.Printf("%d\n",n)
	// findDisappearedNumbers(n)
	num := findDisappearedNumbers(n)
	fmt.Printf("%d\n",num)
}