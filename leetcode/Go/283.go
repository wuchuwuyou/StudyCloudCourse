package main
// Input: [0,1,0,3,12]
// Output: [1,3,12,0,0]
// [0,0,0,0,1]
// [1,0,0,0,0]
func moveZeroes(nums []int)  {
	numZ := 0
    for index := 0; index < len(nums); index++ {
		if nums[index] == 0 {
			numZ += 1
		}else {
			if numZ > 0  {
				nums[index-numZ] = nums[index]
				nums[index] = 0
			}
		}
	}
}