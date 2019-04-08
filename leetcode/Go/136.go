package main
import (
	"fmt"
)
	
// func singleNumber(nums []int) int {
// 	m := make(map[int]int)
// 	for _, num := range nums {
// 		if mnum,ok := m[num];!ok {
// 			m[num] = 1
// 		}else if mnum == 1 {
// 			delete(m,num)
// 		}
// 	}
// 	for res := range m {
// 		return res
// 	}
// 	return 0
// }




func singleNumber(nums []int) int {
	if len(nums) == 0 {
		panic("empty nums")
	}

	n := nums[0]
	for i := 1; i < len(nums); i++ {
		fmt.Printf("%4b,%d,%4b,%d",n,n,nums[i],nums[i])
		println()
		n ^= nums[i]
		fmt.Printf("%4b,%d",n,n)
		println()

	}
	return n
}

func main () {
	n := [] int{2,2,1}
	num := singleNumber(n)
	println(num)
}
// 4 1 2 1 2

// i n nums[i]  n ^ nums[i] 
// 1 4  1		4^1
//   100 001	101	      5