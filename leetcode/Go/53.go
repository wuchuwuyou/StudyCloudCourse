func maxSubArray(nums []int) int {
	ans := nums[0]
	sum := nums[0]
	for i := 1; i < len(nums); i++ {	
		h := sum + nums[i]
		sum = max(h,nums[i])
		if sum > ans {
			ans = sum
		}
	}
	return ans
}

func max(a,b int) int {
	if a <= b{
		return b
	}
	return a
}