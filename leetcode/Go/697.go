package main

import (
	"fmt"
)

type item struct {
	cnt   int
	left  int
	right int
}

func findShortestSubArray(nums []int) int {
	if len(nums) == 1 {
		return 1
	}
	mp := map[int]item{}
	for index, value := range nums {
		if i, ok := mp[value]; ok {
			i.cnt++
			i.right = index
			mp[value] = i
		} else {
			mp[value] = item{1, index, index}
		}
	}
	maxCnt := 0
	var numLen = len(nums)
	var minLen = numLen

	for _, i := range mp {
		if i.cnt > maxCnt {
			maxCnt = i.cnt
			minLen = i.right - i.left + 1
		} else if i.cnt == maxCnt {
			l := i.right - i.left + 1
			if minLen > l {
				minLen = l
			}
		}
	}

	return minLen
}

func main() {

	n := []int{1, 2, 2, 3, 1, 4, 2}
	// n := []int{2, 1}
	// n := []int{1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2}
	// n := []int{1, 2, 2, 3, 1}
	fmt.Printf("%d\n", n)
	num := findShortestSubArray(n)
	fmt.Printf("%d\n", num)
}
