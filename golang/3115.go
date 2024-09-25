package main

func maximumPrimeDifference(nums []int) int {
	isPrime := func(n int) bool {
		if n < 2 {
			return false
		}
		for i := 2; i*i <= n; i++ {
			if n%i == 0 {
				return false
			}
		}
		return true
	}
	var first, last int = -1, -1
	for i := 0; i <= len(nums)-1; i++ {
	    if isPrime(nums[i]){
			first = i
			break
		}
	}
	for i := len(nums)-1; i >=first; i-- {
		if isPrime(nums[i]){
			last = i
			break
		}
	}
	return last - first
}
