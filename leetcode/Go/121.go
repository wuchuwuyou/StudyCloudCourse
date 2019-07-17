func maxProfit(prices []int) int {
	res := 0
	if len(prices) == 0 {
		return res
	}
	small := prices[0]
	for index := 0; index < len(prices); index++ {
		if prices[index]-small > res {
			res = prices[index]-small
		}
		if prices[index] < small {
			small = prices[index]
		}
	}
	return res
}