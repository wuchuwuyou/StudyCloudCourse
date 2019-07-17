package main
import (
	"fmt"
)

// func majorityElement(nums []int) int {
// 	m := make(map[int]int)
// 	for _, a := range nums {
// 		m[a]++
// 	}
// 	max := 0
// 	n := 0
// 	for k, v := range m {
// 		if v>max {
// 			max = v
// 			n = k
// 		}
// 	}
// 	return n
// }

func majorityElement(nums []int) int {
	res := nums[0]
	count := 0
	for i := 0; i < len(nums); i++ {
		if count == 0 {
			res = nums[i]
			count = 1
			fmt.Printf("num:%d  count:%d\n",res,count)
		} else {
			if nums[i] == res {
				count++
			} else {
				count--
			}
			fmt.Printf("num:%d  count:%d\n",res,count)
		}
	}

	return res
}


func main () {
	n := []int{3,3,2,2,1,2,3,2}
	fmt.Printf("%d\n",n)
	// findDisappearedNumbers(n)
	num := majorityElement(n)
	fmt.Printf("%d\n",num)
}